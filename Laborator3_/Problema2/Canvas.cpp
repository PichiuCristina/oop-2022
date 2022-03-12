#include "Canvas.h"
#include <iostream>
#include <cmath>
using namespace std;
bool Canvas::intCanvas(int x, int y)
{
	return x >= 0 && x < height && y >= 0 && y < width;
}

int Canvas::pth(int x, int y)
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	Clear();
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{

	for (int j = y - ray; j <= y + ray; j++)
		for (int i = x - ray; i <= x + ray; i++)
			if (pth(abs(i-x), abs(j-y)) == ray)
				matrix[i][j] = ch;
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int j = y - ray; j <= y + ray; j++)
		for (int i = x - ray; i <= x + ray; i++)
			if (pth(abs(i - x), abs(j - y)) <= ray)
				matrix[i][j] = ch;
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	if (intCanvas(top, left) && intCanvas(bottom, right) && left <= right && top <= bottom) {
		for (int i = top; i < bottom; i++)
			matrix[i][left] = matrix[i][right] = ch;
		for (int j = left; j < right; j++)
			matrix[top][j] = matrix[bottom][j] = ch;
	}
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	if (intCanvas(top, left) && intCanvas(bottom, right) && left <= right && top <= bottom) {
		for (int i = top; i < bottom; i++)
			for (int j = left; j < right; j++)
				matrix[i][j] = ch;
	}
}

void Canvas::SetPoint(int x, int y, char ch)
{
	if (intCanvas(x,y))
		matrix[x][y] = ch;
}

void Canvas::Print()
{
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
			cout << matrix[i][j];
		cout << endl;
	}
}

void Canvas::Clear()
{
	for (int i = 0; i < 1000; i++)
		for (int j = 0; j < 1000; j++)
			matrix[i][j] = ' ';
}

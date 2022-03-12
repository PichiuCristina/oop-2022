#ifndef CANVAS_H_INCLUDED
#define CANVAS_H_INCLUDED
#include<iostream>
#include<stdlib.h>


using namespace std;

class Canvas
{
    // add private data members
private:
    int width, height;
    char matrix[1000][1000];
    bool intCanvas(int x, int y);
    int pth(int x, int y);
public:
    Canvas(int width, int height);
    void DrawCircle(int x, int y, int ray, char ch);
    void FillCircle(int x, int y, int ray, char ch);
    void DrawRect(int left, int top, int right, int bottom, char ch);
    void FillRect(int left, int top, int right, int bottom, char ch);
    void SetPoint(int x, int y, char ch);
    void DrawLine(int x1, int y1, int x2, int y2, char ch);
    void Print(); // shows what was printed
    void Clear(); // clears the canvas
};


#endif // CANVAS_H_INCLUDED

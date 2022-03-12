#ifndef MATH_H_INCLUDED
#define MATH_H_INCLUDED
class Math

{


public:


    static int Add(int nr1,int nr2);

    static int Add(int nr1,int nr2,int nr3);

    static int Add(double nr1,double nr2);

    static int Add(double nr1,double nr2,double nr3);

    static int Mul(int nr1,int nr2);

    static int Mul(int nr1,int nr2,int nr3);

    static int Mul(double nr1,double nr2);

    static int Mul(double nr1,double nr2,double nr3);

    static int Add(int nr,... ); // sums up a list of integers //variadic method

    static char* Add(const char *name1, const char *name2);

};


#endif // MATH_H_INCLUDED

#include <libipd.h>
#include <stdio.h>

// Returns -1 if n is negative, 1 if n is positive, or 0 if n is 0.
//
// Examples:
//  - signum( 0) ==  0
//  - signum(15) ==  1
//  - signum(-5) == -1
int signum(int n)
{
   if(n>0){
       return 1;
   }else if (n<0){
       return  -1;
   }else
    return 0;
}

void test_signum(void)
{
    CHECK_INT( signum( 0),  0 );
    CHECK_INT( signum(15),  1 );
    CHECK_INT( signum(-5), -1 );
}

// Returns the largest of its three arguments.
//
// Examples: See test_max3()
double max3(double a, double b, double c)
{
    if(a>b && a>c)
        return a;
    else if (b>a && b>c)
        return b;
    else if (c>a && c>b)
        return c;
}

void test_max3(void)
{
    CHECK_DOUBLE( max3(1, 2, 3), 3 );
    CHECK_DOUBLE( max3(1, 3, 2), 3 );
    CHECK_DOUBLE( max3(4, 3, 5), 5 );
    CHECK_DOUBLE( max3(4, 3, 3), 4 );
    CHECK_DOUBLE( max3(5, 8, 4), 8 );
    CHECK_DOUBLE( max3(8, 4, 4), 8 );
    CHECK_DOUBLE( max3(-1, -2, -5), -1 );
    CHECK_DOUBLE( max3(0, 5, 0), 5 );


}

int main(void)
{
    test_signum();
    test_max3();
}
//9.a.3
//To mutate a variable once it has been defined means to alter its value.
//Imperative programming focuses on describing how a program operates.
//We want to work with Values: numbers, strings, images,etc...
//Values are abstract conceptual thing; Objects are concrete things
//Variables are the names of Objects; Objects are places we keep Values
//Variables do not directly hold values
//Object can be directly compute with









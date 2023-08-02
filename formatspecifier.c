/*Format specifier tells the compiler what type of data is in 
variable during taking input displaying output to the user.*/

#include <stdio.h>
#define pi 3.14
int main(){

    int a=4;
    float b=6.8;

    printf(" The value of a is %d and the valye of b is %f \n",a , b);

    /* Here 
    %d is format specifier for integer value and 
    %f is format specifier for float or decimal value,similarly 
    %c is format specifier for character,
    %l is for long,
    %lf is for double,
    %LF is for long double .*/

    /* %a.bf will print variable with b decimal points in a 'a' character space*/
    float c = 4.6578586;

    printf("The value of c is %f \n", c );

    printf("The value of c is %7.3f \n ", c );


    /* Constant are value or variable that cannot be changed in the program. */


/* Their are 2 ways to define a constant 

1. using 'const' keyword

2. using '#define preprocessor' */

const int d=6;

// d=7; this line cannot be processed by the compiler as d is constant.

printf(" %d \n" , d);


//pi=6.8; this line cannot be processed by the compiler as pi is constant. line 2 #define preprocessor

printf(" %f \n ", pi);

    return 0;

}
/*Any character is entered through the keyboard, write a program to 
determine whether the character entered is a capital letter, a small case letter, 
a digit or a special symbol.
The following table shows the range of ASCII values for various characters:
#include <stdio.h>
int main(){
    char a;
    printf("Enter the character: ");
    scanf(" %c " , &a );
    if (a >= 65 && a <= 90 );
    printf(" You've entered a capital letter .\n");
    else if ( a>= 97 && a <= 122);
    printf("You've entered a small letter . \n");
    else if ( a >= 48 && a  <=57 );
    printf("You've entered a number");
    else
    printf("You've entered a special symbol.");

    return 0 ;
}
*/
/* A certain grade of steel is graded according to the following conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met 
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met 
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of hardness,
carbon content and tensile strength of the steel under consideration and
output the grade of the steel.*/

#include <stdio.h>
int main(){
    int h , ts ;
    float cc ; 
    printf( " Hardness : ");
    scanf(" %d " , &h);
    printf(" Carbon content : ");
    scanf( " %d ", &cc );
    printf(" Tensile strength : ") ;
    scanf(" %d ", &ts);
    if ( h > 50 && cc < 0.7 && ts <5600)
    printf(" Grade is 10 ");
    else if ( h > 50 && cc < 0.7 )
    printf(" Grade is 9 ");
    else if (cc <0.7 && ts >> 5600 )
    printf(" Grade is 8 ");
    else if ( h > 50 && ts > 5600)
    printf(" Grade is 7 ");
    else if ( h > 50 || cc < 0.7 || ts < 5600 )
    printf(" Grade is 6 ");
    else
    printf(" Grades is 5 ");
    return 0;

}
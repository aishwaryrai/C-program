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
output the grade of the steel.

#include <stdio.h>
int main(){
    int h , ts ;
    float cc ; 
    printf( " Hardness : ");
    scanf(" %d " , &h);
    printf(" Carbon content : ");
    scanf( " %f ", &cc );
    printf(" Tensile strength : ") ;
    scanf(" %d ", &ts);
    if ( h > 50 && cc < 0.7 && ts <5600)
    printf(" Grade is 10 ");
    else if ( h > 50 && cc < 0.7 )
    printf(" Grade is 9 ");
    else if (cc <0.7 && ts > 5600 )
    printf(" Grade is 8 ");
    else if ( h > 50 && ts > 5600)
    printf(" Grade is 7 ");
    else if ( h > 50 || cc < 0.7 || ts < 5600 )
    printf(" Grade is 6 ");
    else
    printf(" Grades is 5 ");
    return 0;

} */

/*If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is valid or not.
The triangle is valid if the sum of two sides is greater than the largest of the three sides.
#include <stdio.h>
int main(){
    int a , b , c ; //a,b,c are sides of triangle
    printf(" Enter the value of a , b , c : ");
    scanf(" %d %d %d ", &a , &b , &c );
    if(a + b > c || a + c > b || b + c > a )
    printf("Triangle is valid ");
    else
    printf("Triangle is invalid ");
    return 0;


}
*/
/* If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles, equilateral, 
scalene or right angled triangle. 

#include <stdio.h>
#include <math.h>

int main(){
    int a , b , c ; //a,b,c are sides of triangle
    printf(" Enter the value of a , b , c : ");
    scanf(" %d %d %d ", &a , &b , &c );
    if ( (a == b ) && a != c  || ( b == c ) && b != a || ( c == a ) && c != b)
    printf(" The triangle is isosceles. ");
    else if(a == b && b == c)
    printf(" The triangle is equilateral. ");
    else if(!(a == b && b== c))
    printf(" The triangle is scalene. ");

    else if (pow(a,2) + pow(b,2) == pow (c,2) || pow(a,2) + pow (c,2) == pow(b,2) || 
    pow(b,2) + pow (c,2)  == pow(a,2) )
    printf(" The triangle is right angled "); 
    else
    printf(" The triangle is invalid ");
    return 0;


} */

/* Write a program that receives month and date of birth as input and 
prints the corresponding Zodiac sign based on the following table: 

#include <stdio.h>
int main(){
    int d , m; // d denotes day and m denotes month
    printf(" Enter the day ( 1-31): ");
    scanf(" %d " , &d);
    printf(" Enter the month (1-12): ");
    scanf(" %d " , &m );
    if(m == 12 && d >= 22 && d <= 31 || m==1 && d >= 1 && d<= 19)
    printf("Your zodiac sign is Capricorn");
    if(m == 1 && d >= 20 && d <= 31 || m == 2&& d >= 1 && d<= 17)
    printf("Your zodiac sign is Aquarius ");
    if(m == 2 && d >= 18 && d <= 28 || m == 3 && d >= 1 && d<= 19 )
    printf("Your zodiac sign is Pisces ");
    if(m == 3 && d >= 20 && d <= 31  || m==4 && d >= 1 && d<= 19)
    printf("Your zodiac sign is Aries ");

    if(m == 4 && d >= 20 && d <= 30 || m== 5&& d >= 1 && d<= 20)
    printf("Your zodiac sign is Taurus");
    if(m == 5 && d >= 21 && d <= 31 || m==6 && d >= 1 && d<= 20)
    printf("Your zodiac sign is Gemini ");
    if(m == 6 && d >= 21 && d <= 30 || m==7 && d >= 1 && d<= 22)
    printf("Your zodiac sign is Cancer");
    if(m == 7 && d >= 23 && d <= 31 || m==8 && d >= 1 && d<= 22 )
    printf("Your zodiac sign is Leo");
    if(m == 8 && d >= 23 && d <= 31 || m==9 && d >= 1 && d<= 22)
    printf("Your zodiac sign is Virgo ");

    if(m == 9 && d >= 23 && d <= 31 || m==10 && d >= 1 && d<= 22)
    printf("Your zodiac sign is Libra ");

    if(m == 10 && d >= 23 && d <= 31 || m==11 && d >= 1 && d<= 21)
    printf("Your zodiac sign is Scorpio ");

    if(m == 11 && d >= 22 && d <= 31 || m==12 && d >= 1 && d<= 21)
    printf("Your zodiac sign is Sagittarius ");
    
    return 0;

}
*/

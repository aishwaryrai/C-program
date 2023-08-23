/*If cost price and selling price of an item are input through the keyboard, 
write a program to determine whether the seller has made profit or incurred loss. 
Also determine how much profit he made or loss he incurred.

#include <stdio.h>
int main(){
    int cp , sp;
    printf("Enter the cost price ");
    scanf("%d", &cp);
    printf(" Enter the selling price ");
    scanf(" %d ", &sp);

    if(cp<sp)
    {
        printf(" You made profit \n");
        printf("Profit = %d \n ", sp-cp );

    }
    else
    {
        printf(" You made loss \n");
        printf("Loss = %d \n", cp-sp);
    }
    return 0;


}
*/

/*Any year is input through the keyboard. 
Write a program to determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)

#include <stdio.h>
int main(){
    int year;
    printf(" Enter the year ");
    scanf( " %d ", &year );
    if (year%4==0)
    {
        printf( " It is a leap year ");

    }

    else 
    {
        printf(" It is not a leap year " );


    }
return 0;

}
*/

/*Given three points (x1, y1), (x2, y2) and (x3, y3).
 write a program to check if all the three points fall on one straight line.

#include <stdio.h>
int main(){
    int x1 , y1 , x2 , y2 , x3 , y3 , a , b , c ;
    printf("x1,y1,x2,y2,x3,y3: ");
    scanf(" %d%d%d%d%d%d " , &x1,&y1,&x2,&y2,&x3,&y3);

    a = pow(x1-x2,2) + pow(y1-y2,2);

    b = pow(x2-x3,2) + pow(y2-y3,2);

    c = pow(x1-x3,2) + pow(y1-y3,2);

    if(a+b=c)
    {
        printf( " All the three points fall on one straight line. ");


    }
    else

    {
        printf( " All the three points dont fall on one straight line.");
    }
return 0;


} */

/*Given the coordinates (x, y) of center of a circle and its radius.
write a c program which will determine whether a point lies inside the circle,
on the circle or outside the circle. 
(Hint: Use sqrt() and pow() functions)

#include <stdio.h>
#include <math.h>
int main(){
    int x1,y1,x2,y2;
    float dist;
    printf(" Coordinate of centre of circle : ");
    scanf( " %d %d " , &x1 , &y1 );

    printf(" Cooridnate of the point on the circle : ");
    scanf(" %d %d ", &x2 , & y2 );

    dist= sqrt(pow (x2-x1,2) + pow (y2-y1 , 2));

    if ( dist > radius)
    {
        printf(" Point lies outside the circle ");
    }
    else if (dist == radius)
    {
        printf(" Point lies on the circle ");
    }
    else
    {
        printf("Point lies inside the circle ");
    }

}
*/
/*The distance between two cities (in km.) is input through the keyboard.
 Write a program to convert and print this distance in meters, feet, inches and centimeters.*/

#include <stdio.h>
int main(){
    int distance;
    printf("Enter the Distance");
    scanf("%d", &distance);

    int a;
    a=distance*1000;

    printf("a=%d",a);
    return 0;

}
/*The length and breadth of a rectangle and radius of a circle are input through the keyboard. 
Write a program to calculate the area and perimeter of the rectangle, and the area and 
circumference of the circle.*/

#include <stdio.h>
int main(){
    int length , breadth , radius ;
    printf(" Enter the length , breaadth , radius ",length , breadth , radius);
    scanf(" &d &d &d ", &length , &breadth , &radius);
    int area_of_rectangle , perimeter_of_rectangle ;
    area_of_rectangle = length * breadth;
    perimeter_of_rectangle=2*(length + breadth);
    printf("area_of_rectangle = %d", area_of_rectangle);
    printf("perimeter_of_rectangle = %d", perimeter_of_rectangle);
    
    int area_of_circle , cicumference_of_circle ; 
    area_of_circle = 22/7 * radius * radius;
    cicumference_of_circle = 2*22/7*radius;
    printf("area_of_circle = %d" , area_of_circle);
    printf("circumference_of_circle = %d",cicumference_of_circle);
    return 0;
    
}
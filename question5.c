/*Temperature of a city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade degrees.*/

#include <stdio.h>
int main(){
    float tempf ; 

    printf(" Temperature in Farhenheit ", tempf);
    scanf(" %f " , &tempf );

    float tempc ; 
    tempc = (tempf-32)*5/9;
    printf(" Temperature in Centigrade = %f " , tempc);
     
     return 0;


}
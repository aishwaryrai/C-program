#include<stdio.h>
int main(){
    int age ; 
    printf(" Enter your age : ");
    scanf(" %d " , &age );
    switch (age)     
    {
    case (18):
        printf(" Your age is 18. ");
    case (28):
        printf(" Your age is 28. ");
    case (40):
        printf(" Your age is 40. ");
    
    
    default:
    printf("Your age is not 18 , 28 , 40 ");
    
    }
    return 0 ;

}
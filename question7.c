#include <stdio.h>
int main(){
    int maths , science ; 
    printf("Your marks in maths\n ");
    scanf(" %d " , &maths);
    printf("Your marks in science\n ");
    scanf(" %d " , &science);
    if(science>=33 && maths >=33){
        printf("You are passed in both maths and science");
        printf("You will get a gift worth Rupees 45");
    }
    else if (maths>=33 && science<33){
        printf("You are passed only in maths");
        printf("You will get a gift worth Rupees 15 ");
    }
    else if (maths<33 && science>=33){ //if else ladder
        printf("You are passed only in science");
        printf("You will get a gift worth Rupees 15");
    }
    else
    printf("You are fail in both maths and science");

    return 0; 

}
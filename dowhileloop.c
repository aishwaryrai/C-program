// Do while loop checks the condition after executing the statement within the loop.

# include<stdio.h>
int main(){
    int num , index = 0 ;
    printf(" Enter the number : ");
    scanf( " %d ", &num );
    do{
        printf("%d \n ", index =index + 1);

    } while (index < num);

}
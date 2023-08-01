/*If the marks obtained by a student in five different subjects are input through the keyboard.
write a program to find out the aggregate marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student in each subject is 100.*/

#include <stdio.h>
int main(){
    int maths;
    int phy;
    int chem;
    int eng;
    int ped;
printf("Enter the marks in maths,phy,chem,eng,ped");

scanf("%d%d%d%d%d",&maths,&phy,&chem,&eng,&ped);

int aggregate_marks;

aggregate_marks= maths+phy+chem+eng+ped;
printf("aggregate_marks=%d\n",aggregate_marks);

int percentage_marks;
percentage_marks= aggregate_marks*100 / 500;
printf("percentage_marks=%d",percentage_marks);


return 0;
}
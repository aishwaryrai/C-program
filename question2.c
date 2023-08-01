/*Ramesh’s basic salary is input through the keyboard.
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary.*/

#include <stdio.h>

int main() {
    int basic_salary;
    printf("Enter Basic Salary: ");
    scanf("%d", &basic_salary);

    int dearness_allowance;
    dearness_allowance = basic_salary * 40 / 100;

    int houserent_allowance;
    houserent_allowance = basic_salary * 20 / 100;

    int gross_salary;
    gross_salary = basic_salary + dearness_allowance + houserent_allowance;

    printf("Gross Salary = %d", gross_salary);

    return 0;
}x
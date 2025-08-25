/* Basic salary is input through the keyboard.
   His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
   write a program to calculate his gross salary. */

#include <stdio.h>

int main()
{
	float basicSalary, dearnessAllowance, houseRentAllowance, grossSalary;
	
	printf("Please enter your basic salary : ");
	scanf("%f",&basicSalary);
	
	dearnessAllowance = basicSalary * 0.40;
	houseRentAllowance = basicSalary * 0.20;
	
	grossSalary = basicSalary + dearnessAllowance + houseRentAllowance;
	
	printf("Your Gross Salary is : %.2f",grossSalary);
	return 0;
}

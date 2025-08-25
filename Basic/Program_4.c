/* Write a program to calculate simple interest for any principle amount */

#include <stdio.h>

int main()
{
	float principle, rate, time, simpleInterest;
	
	printf("Enter the principle : ");
	scanf("%f",&principle);
	
	printf("Enter the rate : ");
	scanf("%f",&rate);
	
	printf("Enter the time : ");
	scanf("%f",&time);
	
	simpleInterest = (principle*rate*time) / 100;
	
	printf("Simple Interest is : %f",simpleInterest);
	return 0;
}

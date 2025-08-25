/* Enter the four Digits no. through the Keyboard? WAP to find the sum of its first and last Digit */
   
#include<stdio.h>
int main()
{
	int num, firstDigit, lastDigit;
	
	printf("Enter 4 Digit Number : ");
	scanf("%d",&num);
	
	lastDigit = num % 10;
	firstDigit = num / 1000;
	
	printf("The sum of first digit %d and last digit %d is : %d",firstDigit,lastDigit,firstDigit+lastDigit);
	return 0;
}

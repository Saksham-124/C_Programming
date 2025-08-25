/* Enter the four Digits no. through the Keyboard? WAP to find the sum of its all digits */

#include <stdio.h>

int main()
{
	int num, firstDigit, secondDigit, thirdDigit, fourthDigit;
	printf("Enter 4 Digit Number : ");
	scanf("%d",&num);
	
	firstDigit = num / 1000; // 1234 / 1000 = 1
	
	secondDigit = (num / 100) % 10; // (1234 / 100) % 10
									// 12 % 10 = 2
	
	thirdDigit = (num / 10) % 10; // (1234 / 10) % 10
								  // 123 % 10 = 3
	
	fourthDigit = num % 10; // (1234) % 10 = 4
	
	printf("The sum of all digits : %d",firstDigit + secondDigit + thirdDigit + fourthDigit);
}

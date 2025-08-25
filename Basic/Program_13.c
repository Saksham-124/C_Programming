//Enter the four Digits no through the Keyboard? Write a program to reverse the No

#include<stdio.h>
int main()
{
	int num, first, second, third, fourth, reverse;
	printf("Enter the 4 Digit Number : ");
	scanf("%d",&num);
	
	first = num % 10;
	
	second = (num / 10) % 10;
	
	third = (num / 100) % 10;
	
	fourth = num / 1000;
	
	reverse = first * 1000 + second * 100 + third * 10 + fourth;
	
	printf("Reverse value is : %d",reverse);
	return 0;
}

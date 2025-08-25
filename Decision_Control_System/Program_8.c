/* A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine 
   whether the original and reversed numbers are equal or not. */
   
#include<stdio.h>
int main()
{
	int num, reversedNumber, first, second, third, fourth, fifth, originalNumber;
	printf("Enter the five digit number : ");
	scanf("%d",&num);
	
	originalNumber = num;
	
	first = num % 10;
	second = (num / 10) % 10;
	third = (num / 100) % 10;
	fourth = (num / 1000) % 10;
	fifth = num / 10000;
	
	reversedNumber = first * 10000 + second * 1000 + third * 100 + fourth * 10 + fifth * 1;
	
	if(originalNumber == reversedNumber){
		printf("Original Number : %d and Reversed Number : %d are equal", originalNumber, reversedNumber);
	}
	else {
		printf("Original Number : %d and Reversed Number : %d are not equal", originalNumber, reversedNumber);
	}
	
	return 0;
}

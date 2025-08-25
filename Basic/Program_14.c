/* If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits. For example if the number that is input is 12391 then the
   output should be displayed as 23402. */
   
#include<stdio.h>
int main()
{
	// initialize the variable and get the input values.
	int num, first, second, third, fourth, five, result;
	printf("Enter Five Digit Number : ");
	scanf("%d",&num);
	
	// This is give me one bye one digits from the inputs
	first = num / 10000;
	second = (num / 1000) % 10;
	third = (num / 100) % 10;
	fourth = (num / 10) % 10;
	five = num % 10;
	
	// Add 1 in Digits. if digit are 9 they present 0.
	first = (first + 1) % 10;
	second = (second + 1) % 10;
	third = (third + 1) % 10;
	fourth = (fourth + 1) % 10;
	five = (five + 1) % 10;
	
	// add digits
	result = first * 10000 + second * 1000 + third * 100 + fourth * 10 + five;
	
	// show the result
	printf("%d",result);
	return 0;
}

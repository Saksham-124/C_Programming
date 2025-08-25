//Write a C program to check whether a number entered by user is even or odd.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	// Modulo provide a remainder of value.
	if(num%2==0){
		printf("Even is : %d",num);
	} else {
		printf("Odd is : %d",num);
	}
	return 0;
}

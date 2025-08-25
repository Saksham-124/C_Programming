/* Write a program to perform addition of two no. enter through the keyboard */

#include <stdio.h>

int main()
{
	int a,b,c; /* Declare variable */
	
	printf("Enter two enter : "); /* Get the input from user */
	scanf("%d%d",&a,&b);
	
	c = a+b; /* make a logic */
	
	printf("The addition of %d and %d is : %d",a,b,c); /* show the result */
	return 0;
}

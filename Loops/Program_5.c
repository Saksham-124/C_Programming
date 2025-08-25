/* Two numbers are entered through the keyboard. Write a program to find the value of one
   number raised to the power of another.
*/

#include<stdio.h>
int main()
{
	int i, base, expo;
	printf("Enter the Base : ");
	scanf("%d",&base);
	printf("Enter the Exponential : ");
	scanf("%d",&expo);
	
	int result=1;
	
	for(i=1;i<=expo;i++){
		result = result*base;
	}
	printf("\nBase is : %d and Exponential is : %d \n\nResult : %d",base,expo,result);
	return 0;
}

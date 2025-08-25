/* Write a program to sum of digits of given integer number */

#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	
	printf("All Digits are : ");
	for(i=1;i<=num;i++){
		printf("%d, ",i);
		sum = sum + i;
	}
	
	printf("\nSum is : %d",sum);
	
	return 0;
}


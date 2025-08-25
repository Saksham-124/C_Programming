//WAP to print the number entered by user only if the number entered is negative

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the negative value : ");
	scanf("%d",&num);
	
	if(num < 0){
		printf("Your Value is : %d",num);
	} else {
		printf("Your enter value is positive : %d",num);
	}
	return 0;
}

/* Write a program to calculate HCF of Two given number */

#include<stdio.h>
int main()
{
	int a,b,i,min;
	printf("Enter number a : ");
	scanf("%d",&a);
	printf("Enter number b : ");
	scanf("%d",&b);
	
	if(a<b){
		min = a;
	}
	else{
		min = b;
	}
	
	for(i=min;i>=1;i--){
		if(a%i==0 && b%i==0){
			printf("H.C.F is : %d",i);
			break;
		}
	}
	
	return 0;
}


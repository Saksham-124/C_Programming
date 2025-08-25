/* Write a program to check given number is prime or not */

#include<stdio.h>
int main()
{
	int i,num,count=0;
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	for(i=2;i<num;i++){
		if(num%i==0){
			count = count + 1;
		}
	}
	if(count==0){
		printf("%d is prime number.",num);
	}
	else{
		printf("%d is not prime number.",num);
	}
	return 0;
}

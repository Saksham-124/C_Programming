// C Program to Calculate Sum & Average of an Array

#include<stdio.h>
#define size 5

int main()
{
	int arr[size],i,sum=0;
	float average;
	
	for(i=0;i<size;i++){
		printf("Enter Value %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++){
		sum = sum + arr[i];
	}
	
	average = (float)sum/size;
	
	printf("Sum is : %d and Average is : %.2f",sum,average);
	
	return 0;
}

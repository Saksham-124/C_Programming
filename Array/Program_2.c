// C Program to Find the Largest Two Numbers in a given Array

#include<stdio.h>
#define size 5

int main()
{
	int arr[size],i;
	
	for(i=0;i<size;i++)
	{
		printf("Enter Value %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int max = arr[0];
	
	for(i=1;i<size;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];	
		}	
	}
	
	printf("%d",max);
	
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);	
	}	
	
	return 0;
}

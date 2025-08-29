//6. C Program to Cyclically Permute the Elements of an Array

#include<stdio.h>
#define size 4

int arr[size] = {1,2,3,4},i;

void right_shift()
{
	int temp = arr[size-1];
	
    for(i=size-2;i>=0;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
    
	printf("\nRight Shift : ");
  	for(i=0;i<size;i++)
  	{
	 printf("%d ", arr[i]);
  	}
}

void left_shift()
{
	int temp = arr[0];
	
	for(i=1;i<size;i++){
		arr[i-1] = arr[i];
	}
	arr[size-1] = temp;
	
	printf("Left Shift : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}

void printArray()
{
  printf("Element are : ");
  for(i=0;i<size;i++)
  {
	printf("%d ", arr[i]);
  }
}

int main()
{		
	printArray();
	right_shift();
	left_shift();
	right_shift();
	left_shift();
	return 0;
}

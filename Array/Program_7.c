// C Program to Sort the Array in an Ascending Order

#include<stdio.h>


void sort_asc(int arr[], int n)
{
	int i,j,temp;
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}	
	}
	
	printf("Ascending Elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);	
	}	
}

void sort_dsc(int arr[], int n)
{
	int i,j,temp;
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}	
	}
	
	printf("\nDecending Elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);	
	}	
}
int main()
{
	int size,i;
	printf("Enter size of array : ");
	scanf("%d", &size);
	
	int arr[size];
	
	for(i=0;i<size;i++)
	{
		printf("Enter index %d element : ", i+1);
		scanf("%d",&arr[i]);
	}
	
	sort_asc(arr,size);
	sort_dsc(arr,size);
	return 0;
}

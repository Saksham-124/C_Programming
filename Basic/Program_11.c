/* Enter the four Digits no. through the Keyboard? WAP to find the sum of its Middle two Digits. */

#include <stdio.h>

int main()
{
	int num, midValues, mid1, mid2, sum;
	printf("Enter 4 digit number : ");
	scanf("%d",&num);
	
	midValues = (num/10) % 100; // this formula gives you mid 2 values 
	                            // (1234/10) % 100 = 123;
								// 123 % 100 = 23 
	
	mid1 = midValues / 10; // This formula gives you last one value = 3
	
	mid2 = midValues % 10; // This formula gives you first one value = 2
	
	sum = mid1 + mid2;
	
	printf("The sum of mid values is : %d",sum);
	
	return 0;
}

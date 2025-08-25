/* Write a program to calculate the sum of following series where n is input by user.
   1 + 1/2 + 1/3 + 1/4 + 1/5 +…………1/n
*/

#include<stdio.h>
int main()
{
	float sum=0,i,num;
	
	printf("Enter number : ");
	scanf("%f",&num);
	
	for(i=1;i<=num;i++){
		sum = sum + 1/i;
	}
	printf("%f",sum);
	return 0;
}

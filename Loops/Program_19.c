/* Compute the natural logarithm of 2, by adding up to n terms in the series
   1 - 1/2 + 1/3 - 1/4 + 1/5 -... 1/n
   where n is a positive integer and input by user.
*/

#include<stdio.h>
int main()
{
	int i;
	float sum=0,num;
	
	printf("Enter Number : ");
	scanf("%f",&num);
	
	for(i=1;i<=num;i++){
		if(i%2==0){
			sum = sum - 1.0/i;
		}
		else{
			sum = sum + 1.0/i;
		}
	}
	
	printf("%f",sum);
	
	return 0;
}

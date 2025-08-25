/* Write A Program to factorial of given which is Entered through the keyboard.
   Ex : num = 5 {1*2*3*4*5 = 120}
*/

#include<stdio.h>
int main()
{
	int i, num, factorial=1;
	
	printf("Enter number whose factorial you want : ");
	scanf("%d",&num);
	
	for(i=2;i<=num;i++){
		factorial = factorial * i;
	}
	printf("Factorial %d is : %d",num,factorial);
	
	return 0;
}

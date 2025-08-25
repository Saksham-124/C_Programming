/* Write a program to reverse the any four Digit No.
  
   Ex {1234 -> 4321}
   
*/

#include<stdio.h>
int main()
{
	int i,num,rem,digit;
	
	printf("Enter 4 Digit Number : ");
	scanf("%d",&num);
	
	
	
	while(num!=0){
		digit = num % 10;
		rem = (rem*10) + digit;
		num = num / 10;
	}

	printf("%d",rem);
	return 0;
}

/* Write a Program to Check that given No is palindrome or Not.

   Ex : 121 (reversed: 121) - Palindrome 
		1331 (reversed: 1331) - Palindrome 
		12345 (reversed: 54321) - Not a palindrome
*/

#include<stdio.h>
int main()
{
	int num,temp,digit,rev;
	
	printf("Enter number whose you want to check palindrom or not : ");
	scanf("%d",&num);
	
	temp = num;
	
	while(num!=0){
		digit = num % 10;
		rev = (rev*10) + digit;
		num = num / 10;
	}
	
	if(temp == rev){
		printf("\nOriginal Number is : %d and Reverse Number is : %d\n\nIt is Palindrom",temp,rev);
	}
	else{
		printf("\nOriginal Number is : %d and Reverse Number is : %d\n\nIt is Not Palindrom",temp,rev);
	}
	
	return 0;
}

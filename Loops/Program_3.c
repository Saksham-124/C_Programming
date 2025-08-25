/* Write a Program to print the Table of a number which is input through the Keyboard. 
   For Ex:- table of 2 is {2 4 6 8 10 --------------20}
*/

#include<stdio.h>
int main()
{
	int i,num;
	
	printf("Please enter number whose table you want : ");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n",num,i,num*i);
	}
	getch();
	return 0;
}

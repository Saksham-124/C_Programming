/* A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds, 
   find the total number of currency notes of each denomination the cashier will have to give to the withdrawer. */
   
#include<stdio.h>
int main()
{
	int amount, note_100, note_50, note_10, result, remainder;
	printf("Enter Withdrawer Amount : ");
	scanf("%d", &amount);
	
	note_100 = amount / 100;
	
	remainder = amount % 100;
	
	note_50 = remainder / 50;
	
	remainder = amount % 50;
	
	note_10 = remainder / 10;
	
	printf("\n**** Cashier Will Provide Notes **** \n\nNote 100*%d = %d \nNote 50*%d = %d\nNote 10*%d = %d",note_100, 100*note_100, note_50, 50*note_50, note_10, 10*note_10);
	return 0;
}


/* While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. 
   If quantity and price per item are input through the keyboard, write a program to calculate the total expenses. */
   
#include<stdio.h>
int main()
{
	float items, quantity, price, discount;
	printf("Enter Quantity : ");
	scanf("%f",&quantity);
	printf("Enter Price : ");
	scanf("%f",&price);
	
	if(quantity > 1000){
		discount = price - 0.10;
		printf("Totoal Expenses are : %.2f",discount);
	} else {
		printf("Total Expenses are : %.2f",price);
	}
	return 0;
}

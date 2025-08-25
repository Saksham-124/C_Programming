/* Write a program to find the weather it is leap year or Not */

#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year : ");
	scanf("%d",&year);
	
	if((year % 4 == 0 & year % 100 != 0) | year % 400 == 0){
		printf("This is Leap Year : %d",year);
	} else {
		printf("This is Not Leap Year : %d",year);
	}
	return 0;
}

/* Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program
   to convert this temperature into Centigrade degrees.*/
   
#include <stdio.h>

int main()
{
	float fahrenheit, centigrade;
	
	printf("Enter the Fahrenheit : ");
	scanf("%f",&fahrenheit);
	
	centigrade = (fahrenheit - 32) * 5/9;
	
	printf("Centigrade degrees is : %.2f",centigrade);
	return 0;
}

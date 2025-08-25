/* If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. 
   The triangle is valid if the sum of two sides is greater than the largest of the three sides.
   
   formula :
   a + b > c
   a + c > b
   b + c > a  
*/

#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter side a : ");
	scanf("%f",&a);
	printf("Enter side b : ");
	scanf("%f",&b);
	printf("Enter side c : ");
	scanf("%f",&c);
	
	if((a+b>c) && (a+c>b) && (b+c>a)){
		printf("This is valid triangle");
	}
	else{
		printf("This is not valid triangle");
	}
	getch();
	return 0;
}


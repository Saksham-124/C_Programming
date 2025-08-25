/* Write a program to calculate the area of circle and rectangle */

#include <stdio.h>
int main()
{
	float radius, areaOfCircle, length, breath, areaOfRectangle;
	
	printf("Enter radius : ");
	scanf("%f",&radius);
	
	areaOfCircle = 3.14*radius*radius;
	
	printf("The Area of Circle is : %.2f \n",areaOfCircle);
	
	printf("Enter Length : ");
	scanf("%f",&length);
	printf("Enter Breath : ");
	scanf("%f",&breath);
	
	areaOfRectangle = length*breath;
	
	printf("The Area of Rectangle is : %.2f",areaOfRectangle);
	return 0;
}

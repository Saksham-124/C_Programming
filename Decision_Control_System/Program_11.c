/* Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. 
   For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter 
   
   Formula of area of rectangle = length * breadth
   
   Formula of perimeter of rectangle = 2 * (l + b) */

#include<stdio.h>
int main()
{
	float areaOfRectangle, perimeterOfRectangle, length, breadth;
	
	printf("Enter length : ");
	scanf("%f",&length);
	printf("Enter Breadth : ");
	scanf("%f",&breadth);
	
	areaOfRectangle = length * breadth;
	
	perimeterOfRectangle = 2 * (length + breadth);
	
	if(areaOfRectangle > perimeterOfRectangle){
		printf("Area is : %.2f and Perimeter is : %.2f greater than its perimeter",areaOfRectangle, perimeterOfRectangle);
	}
	else {
		printf("Area is : %.2f and Perimeter is : %.2f less than its perimeter",areaOfRectangle, perimeterOfRectangle);
	}
	
	return 0;
}


/* Write a program to calculate the average of five subject marks */

#include <stdio.h>

int main()
{
	int english, hindi, maths, science, sanskrit;
	
	float allSubjectAverage;
	
	printf("Enter English Subject Marks : ");
	scanf("%d",&english);
	
	printf("Enter Hindi Subject Marks : ");
	scanf("%d",&hindi);
	
	printf("Enter Maths Subject Marks : ");
	scanf("%d",&maths);
	
	printf("Enter Science Subject Marks : ");
	scanf("%d",&science);
	
	printf("Enter Sanskrit Subject Marks : ");
	scanf("%d",&sanskrit);
	
	allSubjectAverage = (english+hindi+maths+science+sanskrit) / 5.0;
	
	printf("The Average of all subjects : %f",allSubjectAverage);
	return 0;	
} 

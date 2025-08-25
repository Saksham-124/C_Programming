/* The marks obtained by a student in 5 different subjects are input through the keyboard. The
   
   student gets a division as per the following rules:
   
   Percentage above or equal to 60 - First division
   Percentage between 50 and 59 - Second division
   Percentage between 40 and 49 - Third division
   Percentage less than 40 – Fail
   
   Write a program to calculate the division obtained by the student. */
   
#include<stdio.h>
int main()
{
	float hindi, maths, sanskrit, english, science, total, percentage;
	printf("Enter Hindi Subject Marks : ");
	scanf("%f",&hindi);
	printf("Enter Maths Subject Marks : ");
	scanf("%f",&maths);
	printf("Enter Sanskrit Subject Marks : ");
	scanf("%f",&sanskrit);
	printf("Enter English Subject Marks : ");
	scanf("%f",&english);
	printf("Enter Science Subject Marks : ");
	scanf("%f",&science);
	
	total = hindi + maths + sanskrit + english + science;
	percentage = (total/500) * 100;
	
	if(percentage >= 60){
		printf("\nFirst Division : %.2f",percentage);
	}
	else if(percentage > 50 & percentage < 59){
		printf("\nSecond Division : %.2f",percentage);
	}
	else if(percentage > 40 & percentage < 49){
		printf("\nThird Division : %.2f",percentage);
	}
	else {
		printf("\nFail : %.2f");
	}
	return 0;
}

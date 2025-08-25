/* Write a program find the percentage of five subject marks. If percentage is greater than or
   equal to 50 then print pass otherwise Print Fail */
   
#include<stdio.h>
int main()
{
	float english, maths, science, hindi, sanskrit, percentage, total;
	printf("English Marks : ");
	scanf("%f", &english);
	printf("Maths Marks : ");
	scanf("%f", &maths);
	printf("Science Marks : ");
	scanf("%f", &science);
	printf("Hindi Marks : ");
	scanf("%f", &hindi);
	printf("Sanskrit Marks : ");
	scanf("%f", &sanskrit);
	
	total = english+maths+science+hindi+sanskrit;
	percentage = (total / 500) * 100;
	
	if(percentage >= 50){
		printf("Student is Pass : %.2f", percentage);
	} else {
		printf("Student is Fail : %.2f", percentage);
	}
	return 0;
}

/* A company insures its drivers in the following Cases:
   
   If the driver is married.
   If the driver is unmarried, male & above 30 years of age.
   If the driver is unmarried, female & above 25 years of age.
   
   In all other cases the driver is not insured. If the marital status, sex and age of the driver is
   the inputs, write a program to determine whether the driver is to be insured or not. */
   
#include<stdio.h>

int main() {
    char gender, marriedStatus;
    int yearOfAge;
    
    printf("Enter your gender (Male 'M' or Female 'F'): ");
    scanf(" %c", &gender);
    
    printf("Are you married? (Yes 'Y' or No 'N'): ");
    scanf(" %c", &marriedStatus);
    
    printf("Enter your age: ");
    scanf("%d", &yearOfAge);
    
    if (marriedStatus == 'Y') 
	{
        printf("\nDriver is eligible for insurance.\n");
    } 
	else if (marriedStatus == 'N' && gender == 'M' && yearOfAge > 30) 
	{
        printf("\nUnmarried male above 30 is eligible for insurance.\n");
    }
	else if (marriedStatus == 'N' && gender == 'F' && yearOfAge > 25) 
	{
        printf("\nUnmarried female above 25 is eligible for insurance.\n");
    } 
	else 
	{
        printf("\nDriver is not eligible for insurance.\n");
    }

    return 0;
}


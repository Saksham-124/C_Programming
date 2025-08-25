/* Write a program to enter the numbers till the user wants and at the end it should display the maximum and minimum number entered. */

#include <stdio.h>

int main() {
    int num, max, min;
    char choice;
    int first = 1;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (first) { 
            max = min = num;
            first = 0;
        } else {
            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Maximum number entered: %d\n", max);
    printf("Minimum number entered: %d\n", min);

    return 0;
}


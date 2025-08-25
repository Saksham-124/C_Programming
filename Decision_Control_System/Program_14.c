/* Any character is entered through the keyboard; write a program to determine whether 
   the character entered is capital letter, a small case letter, a digit or a special symbol.
   
   The following table shows the range of ASCII values for various characters.
   Characters ASCII Values :-
	A – Z 65 – 90
    a – z 97 – 122
    0 – 9 48 – 57
    Special symbols 0 - 47, 58 - 64, 91 - 96, 123 - 127
*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character : ");
	scanf("%c",&ch);

	if((ch >= 65) && (ch <= 90)){
		printf("\nUpper case letter : %c, ASCII Code : %d",ch,ch);
	}
	else if((ch >= 97) && (ch <= 122)){
		printf("\nLower case letter : %c, ASCII Code : %d",ch,ch);
	}
	else if((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127)){
		printf("\nSpecial symbol : %c, ASCII Code : %d,",ch,ch);
	}
	else {
        printf("\nOther character (possibly non-printable): ASCII Code: %d\n", ch);
    }
	return 0;
}

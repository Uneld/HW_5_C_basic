#include <stdio.h>
#include <conio.h>

int main ()
{
	int count_brackets = 0;
	char character;
	puts("Enter a string consisting of the characters '(', ')' and ending with the character '.'");

	
	do {
		character = getch(); 
		putchar(character);
		if (character == '(')
		{
			count_brackets++;
		} else if (character == ')'){
			count_brackets--;
		}
	} while (character != '.');
	
	puts("\n");
	if (count_brackets == 0) {
		puts("Brackets sequence is correct");
	} else {
		puts("Brackets sequence is not correct");
	}
	
	return 0;
}

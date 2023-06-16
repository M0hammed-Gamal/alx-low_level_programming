#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		ch++;
	}
	putchar('\n');

	return (0);
}

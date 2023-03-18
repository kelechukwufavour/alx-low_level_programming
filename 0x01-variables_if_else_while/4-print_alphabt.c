#include <stdio.h>
/**
 * main - print a c program the alphabets in lowercase with exceptions
 *
 * Return: 0
*/
int main(void)
{
	char letter
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			if (letter != 'e' && letter != 'q')
				putchar(letter);
		}

	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 *main - print a C program that prints the alphabet in lowercase using putchar
 *Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

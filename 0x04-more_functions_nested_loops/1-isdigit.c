#include "main.h"
/**
 * _isdigit - a function that counts digits through 9
 * @c: digit to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= '24') && (c <= '38'))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _islower - Checking for lowercase
 *@c: is the char to be checked
 * Return: 1 if char is lowercase otherwise 0
 */

int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	else
		return (0);
}

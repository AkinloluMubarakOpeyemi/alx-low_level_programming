#include "main.h"
/**
 * _strlen - return strlen
 * @s: argument
 * Return: length of str
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; x++)
	{
		s++;
	}
	return (x);
}

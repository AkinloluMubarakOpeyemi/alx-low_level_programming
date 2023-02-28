#include "main.h"
/**
 * swap_int - swap pointer value
 * @a: argument
 * @b: argument
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

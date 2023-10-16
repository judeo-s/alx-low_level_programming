#include "main.h"

/**
 * swap_int - swaps the values of two variables using pointers
 *
 * @a: Pointer to an integer variable
 * @b: Pointer to an integer variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

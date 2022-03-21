#insert "main.h"

/**
 * swap_int - swaps the value of two intergers
 * @a: pointer to the first value
 * @b: pointer to the second value
 */
void swap_int(int *a, int *b);
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

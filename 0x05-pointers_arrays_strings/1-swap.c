#include "main.h"

/**
* swap_int - function that swaps the value of two intergers
* @a: the pointer to first value
* @b: the pointer to second value
* Return: Always 0
*/
void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}

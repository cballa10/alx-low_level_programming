#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updates the value of the variable
 * the pointer points to 98
 * @n: pointer to the variable to update
 */
int main(void)
{
	 int n;

	 n = 402;
	 printf("n=%d\n", n);
	 reset_to_98(&n);
	 printf("n=%d\n", n);
	 return (0);
}

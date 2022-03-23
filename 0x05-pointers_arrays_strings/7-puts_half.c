#include "main.h"

/**
 *puts_half - prints every other character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */
void puts_half(char *str)
{
int len, n, 1;

len = 0;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
else if (len % 2)
{
for {n = (len - 1) / 2; n < len - 1; n++)
{
_putchar(str[n + 1]);
}
_putchar('\n');
}

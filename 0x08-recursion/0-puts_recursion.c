#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function like puts()
 * @s: point to the string to be printed
 * Return: Always 0 (Success)
*/

void _puts_recursion(char *s)
{
if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}

int main(void)
{
_puts_recursion("Puts with recursion");
return (0);
}

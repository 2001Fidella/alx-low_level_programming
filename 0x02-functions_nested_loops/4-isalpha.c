#include "main.h"

/**
 * _isalph - Checks for alphabetic character
 * @c: The charater to be checked
 * Return: 1 for alphabetic character or 0 for anything alse
*/

int _isalph(int c)
{
if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}

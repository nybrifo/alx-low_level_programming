#include "main.h"
/**
 * _strspn - Entry point
 * @s: param
 * @accept: param
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int l = 0;
int r;

while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
l++;
break;
}
else if (accept[r + 1] == 0)
return (l);
}
s++;
}
return (l);
}

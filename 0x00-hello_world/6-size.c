#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %1u byte(s)\n", (unsigned int)sizeof(a));
printf("Size of an int: %1u byte(s)\n", (unsigned int)sizeof(b));
printf("Size of a long int: %1u byte(s)\n", (unsigned int)sizeof(c));
printf("Size of a long long iny: %1u byte(s)\n", (unsigned int)sizeof(d));
printf("Size of a float: %1u byte(s)\n", (unsigned int)sizeof(f));
return (0);
}

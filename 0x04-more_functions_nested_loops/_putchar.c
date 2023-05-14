#include "main.h"
#include <stdio.h>
/**
 * _putcher - writes the character c to stdout
 * @c: The charactor to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatly.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

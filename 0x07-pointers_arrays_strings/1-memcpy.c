#include "main.h"

/**
 * _memcpy() - function name
 *
 * @src: source, parameter1
 *
 * @dest: destination, parameer2
 *
 * @n: function parameter
 *
 * return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
        dest[i] = src[i];
        }
        return (dest);
}

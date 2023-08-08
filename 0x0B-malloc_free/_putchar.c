#include <unistd.h>

/**
 * _putchar-writes the character c stdout 
 * @c:The character to print 
 * 
 * Return: On sucess 1.
 * On error,-1 is returned,and errno is set approriately .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

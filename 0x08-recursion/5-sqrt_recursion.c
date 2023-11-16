#include "main.h"

/**
 * find sqrt sqrt function use help
 * @n: sqrt
 * @x: sqrt of n
 * Return: natural sqrt of n
 */

int help(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return(help(n, ++x));
	return (-1);
}
/**
 * _sqrt_recursion-get the natural sqrt of n 
 * @n: integer
 * Return:natural sqrt of n 
 */
 
int _sqrt_recursion(int n)
{
	return (help(n,0));
}

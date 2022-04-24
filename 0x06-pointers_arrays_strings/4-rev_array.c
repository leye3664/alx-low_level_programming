#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: int type pointer 
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int k, j, i = 0;

	n--;
	j = n / s;
	while (n >= j)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
		n--;
		i++;
	}
}

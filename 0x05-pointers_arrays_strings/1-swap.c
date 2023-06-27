#include "main.h"

/**
 * swap-int - swaps the values of two integers
 * @a: inteoger to swap
 * @b: interger to swap
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

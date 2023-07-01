#include "sort.h"

/**
 * swapIntegers - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swapIntegers(int *c, int *d)
{
	int temp;

	temp = *c;
	*c = *d;
	*d = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *minimum;
	size_t c, d;

	if (array == NULL || size < 2)
		return;

	for (c = 0; c < size - 1; c++)
	{
		minimum = array + c;
		for (d = c + 1; d < size; d++)
			minimum = (array[d] < *minimum) ? (array + d) : minimum;

		if ((array + c) != minimum)
		{
			swapIntegers(array + c, minimum);
			print_array(array, size);
		}
	}
}

#include "sort.h"

#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using BubbleSort
 *
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
size_t c, d;
int temp;
int swapped;

	if (array == NULL || size < 2)
		return;

	for (c = 0; c < size - 1; ++c)
	{
		swapped = 0;

		for (d = 0; d < size - c - 1; ++d)
		{
			if (array[d] > array[d + 1])
			{
				/* Swap elements */
				temp = array[d];
				array[d] = array[d + 1];
				array[d + 1] = temp;
				swapped = 1;

				/* Print array after each swap */
				print_array(array, size);
			}
		}

/* If no swapped element in the inner loop, the array is already sorted */
	if (swapped == 0)
	break;
	}
}


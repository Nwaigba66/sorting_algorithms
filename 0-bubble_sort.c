#include "sort.h"

#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using BubbleSort
 *
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void swap(int *a, int *b) {
    int temp = *a;
    int swapped;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *array, size_t size) {
    if (array == NULL || size == 0)
        return;
    for (size_t i = 0; i < size - 1; i++) {
        swapped = 0;
        for (size_t j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                swapped = 1;
            }
        }

        /* Print array after each swap*/
        printf("Array after iteration %zu: ", i + 1);
        for (size_t k = 0; k < size; k++) {
            printf("%d ", array[k]);
        }
        printf("\n");

        /* If no swaps occurred in the inner loop, the array is already sorted*/
        if (swapped == 0)
            break;
    }
}


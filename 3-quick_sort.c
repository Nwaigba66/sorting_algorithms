#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

size_t partition(int *array, size_t low, size_t high) {
    int pivot = array[high];
    size_t i = low - 1;

    for (size_t j = low; j < high; j++) {
        if (array[j] < pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[high]);

    return i + 1;
}

void quick_sort_helper(int *array, size_t low, size_t high) {
    if (low < high) {
        size_t pivot_index = partition(array, low, high);

        // Print array after each swap
        printf("Array after partition: ");
        for (size_t i = low; i <= high; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        quick_sort_helper(array, low, pivot_index - 1);
        quick_sort_helper(array, pivot_index + 1, high);
    }
}

void quick_sort(int *array, size_t size) {
    if (array == NULL || size == 0)
        return;

    quick_sort_helper(array, 0, size - 1);
}


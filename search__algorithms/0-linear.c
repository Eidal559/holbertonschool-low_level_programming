#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found or array is NULL.
 */
int linear_search(int *array, size_t size, int value) {
    /* Check for NULL array */
    if (array == NULL) {
        return (-1);
    }

    /* Iterate through the array to find the value */
    for (size_t i = 0; i < size; ++i) {
        /* Print the value being compared */
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        /* If the value is found, return the index */
        if (array[i] == value) {
            return (i);
        }
    }

    /* If the value is not found, return -1 */
    return (-1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int search_value = 7;
    int result = linear_search(arr, size, search_value);

    if (result != -1) {
        printf("Value %d found at index %d\n", search_value, result);
    } else {
        printf("Value %d not found in the array\n", search_value);
    }

    return (0);
}

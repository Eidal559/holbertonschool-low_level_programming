#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 *
 * @array: Pointer to the first element of the array to search in (sorted in ascending order).
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found or array is NULL.
 */
int binary_search(int *array, size_t size, int value) {
    
    size_t left = 0;
    size_t right = size - 1;

    if (array == NULL) {
        return -1;
    }

    while (left <= right) {
        size_t mid = left + (right - left) / 2;

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] > value) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    // If the value is not found, return -1
    return -1;
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int search_value = 7;
    int result = binary_search(arr, size, search_value);

    if (result != -1) {
        printf("Binary Search: Value %d found at index %d\n", search_value, result);
    } else {
        printf("Binary Search: Value %d not found in the array\n", search_value);
    }

    return 0;
}

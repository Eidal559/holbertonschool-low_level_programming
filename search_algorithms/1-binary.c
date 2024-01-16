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
int binary_search(int *array, size_t size, int value) 
{
    size_t left, right, mid;
    left = 0;
    right = size - 1;
    int i;

    if (array == NULL) 
    {
        return (-1);
    }

    while (left <= right) 
    {
        mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (i = left; i <= right; ++i) 
        {
            printf("%d", array[i]);
            if (i < right) {
                printf(", ");
            }
        }
        printf("\n");

        if (array[mid] == value) 
        {
            printf("Found at index: %lu\n", mid);
            return mid;
        } else if (array[mid] > value) 
        {
            right = mid - 1;
        } else 
        {
            left = mid + 1;
        }
    }

    printf("Not found\n");
    return (-1);
}

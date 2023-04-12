#include "search_algos.h"

/**
 * linear_search - Using the Linear search algorithm
 * to serch for a value in an array of integers 
 *
 * @array: points to the first element of array
 * @size: size of the array
 * @value: value to search
 * Return: on 0 always exit success.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
        if (*(array + i) == value)
            return (i);
    }

    return (-1);
}

#include "sort.h"

/**
 * selection_sort - a function that use the selection sort algo
 * @array: the given array
 * @size: the size of the array
 * Return: returns the sorted array in order
*/

void selection_sort(int *array, size_t size)
{
    size_t i, j, temp, min;

    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i; j < size; j++)
        {
            if (array[min] > array[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
               temp = array[i];
	           array[i] = array[min];
	           array[min] = temp;
	           print_array(array, size);
        }
    }

}
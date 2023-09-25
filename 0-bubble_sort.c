#include "sort.h"
/**
 * bubble_sort - a function that bubbke sort and given array
 * @array: the array given
 * @size: the size of the array
 * Return: returns the array sorted with the bubble sort algo
*/

void bubble_sort(int *array, size_t size)
{
	size_t i,  s = size;
	int tmp, swap = 1;

	while (size >= 2 && swap == 1)
	{
		swap = 0;
		for (i = 0; i < s - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
		s = s - 1;
	}
}

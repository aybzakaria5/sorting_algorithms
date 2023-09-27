#include "sort.h"

/**
 * lomuto_partition - Partitions an array using the Lomuto partition scheme.
 * @array: Pointer to the array to be partitioned.
 * @low: Starting index of the partition.
 * @high: Ending index of the partition.
 * @size: Size of the array
 *
 * Return: The final position of the pivot element after partitioning.
*/
size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = low;
	size_t j = high - 1;
	int temp;
	(void)size;

	while (i < j)
	{
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot && j > i)
			j--;
		if (i < j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
	if (array[i] != pivot)
	{
		array[high] = array[i];
		array[i] = pivot;
		print_array(array, size);
	}
	return (i);
}


/**
 * qsort_algorithm - sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: Pointer to the array to be sorted
 * @low: Starting index of the partition.
 * @high: Ending index of the partition.
 * @size: Size of the array
*/
void qsort_algorithm(int *array, size_t low, size_t high, size_t size)
{
	size_t p;

	if (low < high)
	{
		p = lomuto_partition(array, low, high, size);
		if (p > 0)
			qsort_algorithm(array, low, p - 1, size);
		qsort_algorithm(array, p + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: Pointer to the array to be sorted
 * @size: Size of the array
*/
void quick_sort(int *array, size_t size)
{
	if (size > 1)
	{
		qsort_algorithm(array, 0, (size - 1), size);
	}
}

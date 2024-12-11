#include "sort.h"

/**
 * lomuto_partions - implement the Lomuto partition scheme
 * @size: number of array
 * @array: the array
 * @start: start of index
 * @end:  end of index
 * Return: the index
 */

int lomuto_partition(int *array, int start, int end, int size)
{
	int key = array[end];
	int key_index = start;
	int i, tmp;

	for (i = start; i < end; i++)
	{
		if (array[i] <= key)
		{
			if (key_index !=i)
			{
				tmp = array[key_index];
				array[key_index] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
			key_index++;
		}
	}

	if (key_index != end)
	{
		tmp = array[key_index];
		array[key_index] = array[end];
		array[end] = tmp;
		print_array(array, size);
	}

	return (key_index);
}

/**
 * quicksortalgorithm - Quick sort algorithm, with 1 notation per line
 * @size: number of array
 * @array: the array
 * @start: start of index
 * @end:  end of index
 * Return: nothing
 */
void quicksortalgotrithm(int *array, int start, int end, int size)
{
	if (start < end)
	{
		size_t key = lomuto_partition(array, start, end, size)

			quick_Sort(array, start, key - 1, size);
		quick_Sort(array, key + 1, end, size);
	}
}

/**
 * quick_sort - the quick sort algorithm
 * @array: The array 
 * @size: Number of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_Sort(array, 0, size - 1, size);
}

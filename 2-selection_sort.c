#include "sort.h"

/**
 * selection_sort -  sorts an array of integers in ascending
 * @array: you swap two elements
 * @size: the size
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, sorts, case_best;
	int tempory;

	for (sorts = 0; sorts < size - 1; sorts++)
	{
		case_best = sorts;

		for (i = sorts + 1; i < size; i++)
		{
			if (array[i] < array[case_best])
				case_best = i;
		}

		if (case_best != sorts)
		{
			tempory = array[sorts];
			array[sorts] = array[case_best];
			array[case_best] = array[tempory];
			print_array(array, size);
		}
	}
}

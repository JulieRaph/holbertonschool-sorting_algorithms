#include "sort.h"

/**
 * bubble_sort - function that sorts an array of int in ascending order
 * @array: pointer to array printed after each time you swap 2 elements
 * @size: size of the array
 * Return: void (nothing)
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t step;
	int temp;

	for (step = 0; step < size - 1; step++)
	{
		for (i = 0; i < size - step - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				print_array(array, size);
			}
		}
	}
}

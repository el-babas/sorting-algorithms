#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the [Selection sort] algorithm.
 *
 * @array: Array of integers.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp = 0, is_swap = 0;

	for (i = 0; i < size; i++)
	{
		is_swap = 0;
		tmp = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < tmp)
			{
				is_swap = j;
				tmp = array[j];
			}
		}
		if (is_swap)
		{
			array[is_swap] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}

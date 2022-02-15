#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the [Bubble sort] algorithm
 *
 * @array: The array of integers to sort
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, sz = size, tmp = 0;

	while (i < (sz - 1))
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			print_array(array, size);
		}
		if ((i + 2) == sz)
		{
			i = -1;
			sz--;
		}
		i++;
	}
}

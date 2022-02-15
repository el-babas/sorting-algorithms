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
	unsigned int i = 0, j = 0, tmp = 0, sz = size - 1;

	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz - i; j++)
		{
			/* Info: At each completion of the loop one less element is taken */
			if (array[j] > array[j + 1])
			{
				/* Info: Swap index */
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order
 * using the [Quick sort] algorithm.
 *
 * @array: Array of integers.
 * @size: Size of the array.
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_lomuto(array, 0, size - 1, size);
}

/**
 * quick_sort_lomuto - Implement the Lomuto partition scheme.
 *
 * @array: Array of integers.
 * @head: Beginning of the array.
 * @tail: Ending of the array.
 * @size: Size of the array.
 */
void quick_sort_lomuto(int *array, int head, int tail, size_t size)
{
	int i, idx, tmp;

	if (tail <= head)
		return;

	idx = head;
	for (i = head; i < tail; i++)
	{
		if (array[i] < array[tail])
		{
			if (i != idx)
			{
				tmp = array[i];
				array[i] = array[idx];
				array[idx] = tmp;
				print_array(array, size);
			}
			idx++;
		}
	}
	if (idx != tail && array[idx] != array[tail])
	{
		tmp = array[idx];
		array[idx] = array[tail];
		array[tail] = tmp;
		print_array(array, size);
	}
	quick_sort_lomuto(array, head, idx - 1, size);
	quick_sort_lomuto(array, idx + 1, tail, size);
}

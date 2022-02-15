#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the [Insertion sort] algorithm
 *
 * @list: Double-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *swap;

	if (list == NULL || *list == NULL)
		return;

	current = *list;
	while (current != NULL)
	{
		while (current->next != NULL)
		{
			/* Info: Comparate values of nodes */
			if (current->n < current->next->n)
				break;

			swap = current->next;

			/* Info: Swap nodes */
			current->next = swap->next;
			swap->prev = current->prev;

			if (current->prev != NULL)
				current->prev->next = swap;
			if (swap->next != NULL)
				swap->next->prev = current;

			current->prev = swap;
			swap->next = current;

			/* Info: The pointer is reassigned */
			if (swap->prev != NULL)
				current = swap->prev;
			else
				*list = swap;
				
			print_list(*list);
		}
		current = current->next;
	}
}

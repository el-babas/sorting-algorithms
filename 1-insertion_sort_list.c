#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the [Insertion sort] algorithm
 *
 * @list: Double-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *current, *swap;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = (*list)->next;
	while (head != NULL)
	{
		current = head;
		swap = head->prev;
		/* Info: Comparate values of nodes */
		while (swap != NULL && (current->n < swap->n))
		{
			/* Info: Swap nodes */
			swap->next = current->next;

			if (current->next != NULL)
				current->next->prev = swap;

			current->prev = swap->prev;
			current->next = swap;

			if (swap->prev != NULL)
				swap->prev->next = current;
			else
				*list = current;

			swap->prev = current;

			/* Info: The pointer is reassigned */
			swap = current->prev;

			/* Info: Prints the doubly linked list */
			print_list(*list);
		}
		head = head->next;
	}
}

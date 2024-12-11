#include "sort.h"

/**
 * insertion_sort_list - that sorts a doub link list of int in ascending order
 * @list: print the list after each time you swap 2 elements
 * Return: void (nothing)
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *sorted;

	curr = *list;
	curr = curr->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (curr != NULL)
	{
		while (curr->prev != NULL && curr->n < curr->prev->n)
		{
			sorted = curr;

			if (curr->next != NULL)
				curr->next->prev = sorted->prev;
			curr->prev->next = sorted->next;

			curr = curr->prev;
			sorted->prev = curr->prev;
			sorted->next = curr;

			if (curr->prev != NULL)
				curr->prev->next = sorted;
			curr->prev = sorted;

			if (sorted->prev == NULL)
				*list = sorted;

			print_list(*list);
			curr = curr->prev;
		}
		curr = curr->next;
	}

}

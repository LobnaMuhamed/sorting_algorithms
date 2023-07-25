#include "sort.h"

/**
 * insertion_sort_list - that sorts a doubly linked list of int
 * @list: a pointer to the first element of a linkd list
 *
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *key, *curr, *prev, *next;

	if (!list || !(*list) || !(*list)->next)
		return;
	curr = (*list)->next;

	while (curr)
	{
		key = curr->prev;
		while (key && key->n > curr->n)
		{
			prev = key->prev;
			next = curr->next;
			if (prev)
				prev->next = curr;
			else
				*list = curr;
			curr->prev = prev;
			key->next = next;
			if (next)
				next->prev = key;
			curr->next = key;
			key->prev = curr;

			key = prev;
			print_list(*list);
		}
		curr = curr->next;
	}
	insertion_sort_list(&((*list)->next));
}

#include "sort.h"

/**
 * insertion_sort_list - Sort a list using Insertion
 * @list: head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t **h = list;
	listint_t *h_n = *h->next;
	listint_t *hole, *temp;
	int n_val;

	while (h_n != NULL)
	{
		n_val = h_n->n;

		while (h_n->n > h_n->prev->n)
		{
			temp = h_n->prev;
			h_n->prev = h_n;
			h_n = temp;
		}
		h_n = h_n->next;
	}
}

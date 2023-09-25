#include "sort.h"

/**
 * insertion_sort_list - Sort a list using Insertion
 * @list: head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t **h = list, *h_n = h->next, *hole;
	int cur_val;

	while (h_n != NULL)
	{
		cur_val = h_n->n;
		hole = h_n;

		
		while (h_n->n > h_n->prev->n)
		{
			hole = hole->prev;
			h_n = h_n->prev;
		}
		h_n = h_n->next;
	}
}

#include "sort.h"

/**
 * insertion_sort_list - sorts a doublylinked
 * list of integers in ascending order using
 * insertion sort algorithm
 * @list: the doubly linked list
 *
 * Return: NULL
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *p;

	if (list == NULL)
		return;

	p = *list;

	while (p)
	{
		while (p->next && (p->next->n))
		{
			temp = p->next;
			p->next = temp->next;
			temp->prev = p->prev;

			while (p->prev)
				p->prev->next = temp;

			while (temp->next)
				temp->next->prev = p;

			p->prev = temp;
			temp->next = p;

			if (temp->prev)
				p = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		p = p->next;
	}
}

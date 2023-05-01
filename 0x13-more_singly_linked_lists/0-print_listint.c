#include "lists.h"
/**
* print_listint - this function prints all elements of a listint_t list
* prototype for the function  - size_t print_listint(const listint_t *h)
* @h:linklist's node head
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t bio_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		bio_nodes++;
	}
	return  (bio_nodes);
}

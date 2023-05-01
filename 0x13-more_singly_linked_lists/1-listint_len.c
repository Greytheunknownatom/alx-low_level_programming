#include "lists.h"
/**
* listint_len - this function returns the number of elements in the linked
* listint_t list
* prototype for the function - size_t listint_len(const listint_t *h)
* @h: pointer head
* Return: element's number
*/
size_t listint_len(const listint_t *h)
{
	size_t t_cell = 0;

	while (h != NULL)
	{
	h = h->next;
		t_cell++;
	}
	return (t_cell);
}

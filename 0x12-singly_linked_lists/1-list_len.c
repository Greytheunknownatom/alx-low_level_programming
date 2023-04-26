#include "lists.h"
#include <stdio.h>
/**
* list_len - this function returns the number
* of elements in a linked list_t list
* prototype for the function - size_t list_len(const list_t *h)
* @h: linked list
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t grey_element = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		grey_element++;
	}
	return (grey_element);
}

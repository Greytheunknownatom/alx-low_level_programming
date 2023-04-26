#include <stdio.h>
#include "lists.h"
/**
* print_list - function that prints all elements of a list
* prototype for the function - size_t print_list(const list_t *h)
* @h: name of the list
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t grey_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		grey_nodes++;
	}
	return (grey_nodes);
}

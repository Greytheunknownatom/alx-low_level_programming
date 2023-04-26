#include "lists.h"
/**
* free_list - this function frees a list_t list
* prototype for the function - void free_list(list_t *head)
* @head: head of linked list
*/
void free_list(list_t *head)
{
	list_t *current;
	list_t *atom;

	current = head;

	while (current != NULL)
	{
		atom = current->next;
		free(current->str);
		free(current);
		current = atom;
	}
}

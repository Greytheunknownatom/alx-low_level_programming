#include "lists.h"
/**
* free_listint - this function frees the listint_t list
* prototype for the function -
* void free_listint(listint_t *head)
* @head: single pointer head of the list
* Return: (NULL) IF ERROR
*/
void free_listint(listint_t *head)
{
	listint_t *flip;

	while (head != NULL)
	{
		flip = head;
		head = head->next;
		free(flip);
	}
}

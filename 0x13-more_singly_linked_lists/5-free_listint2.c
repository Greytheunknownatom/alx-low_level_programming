#include "lists.h"
/**
* free_listint2 - this function frees another listint_t list
* setting the head to null
* prototype for the function - void free_listint2(listint_t **head)
* @head: double pointer to head of list element(pointer to pointer)
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *fix_in_2;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			fix_in_2 = *head;
			*head = fix_in_2->next;
			free(fix_in_2);
		}
	}
}

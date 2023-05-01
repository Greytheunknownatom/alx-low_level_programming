#include "lists.h"
/**
* add_nodeint_end - this function adds a new node at the end of a
* listint_t list
* prototype for the function -
* listint_t *add_nodeint_end(listint_t **head, const int n)
* @head: double pointer head
* @n: int
* Return: new elements's address or NULL if failled
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fix_in;
	listint_t *timed_fix_in;

	if (head == NULL)
	return (NULL);

	fix_in = malloc(sizeof(listint_t));
	if (fix_in == NULL)
	return (NULL);

	fix_in->n = n;
	fix_in->next = NULL;

	if (*head == NULL)
	{
	*head = fix_in;
		return (fix_in);
	}

	timed_fix_in = *head;

	while (timed_fix_in->next != NULL)
	{
		timed_fix_in = timed_fix_in->next;
	}
	timed_fix_in->next = fix_in;
	return (fix_in);
}

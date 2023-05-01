#include "lists.h"
/**
* pop_listint - this function deletes the head node of the listint_t linked
* list
* prototype for the function - int pop_listint(listint_t **head);
* @head: pointer to pointer head node
* Return: head node data or (0) if empty
*/
int pop_listint(listint_t **head)
{
	listint_t *tamper;
	int exed = 0;

	if (*head == NULL)
	return (exed);

	if (*head == NULL)
	return (exed);

	tamper = *head;
	exed = tamper->n;

	*head = (*head)->next;
	free(tamper);

	return (exed);
}

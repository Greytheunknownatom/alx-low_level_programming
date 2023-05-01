#include "lists.h"
/**
* get_nodeint_at_index - returns linked list nth node
* get_nodeint - function returns nth node of listint_t linked list
* prototype for the function -
* listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
* @head: first node pointer
* @index: index of node
* Return:elements number in list , null if node exists not
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int returner;

	if (head == NULL)
	return (NULL);

	for (returner = 0; returner < index; returner++)
	{
		head = head->next;
		if (head == NULL)
		return (NULL);
	}
	return (head);
}

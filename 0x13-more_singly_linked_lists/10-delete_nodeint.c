#include "lists.h"
/**
* delete_nodeint_at_index - delets the node
* delete_nodeint - function that deletets
* node inside linked list at the (index)
* prototype for the function -
* int delet_nodeint_at_index(listint_t **head, unsigned int index)
* @head: (pointer) double points to the head
* @index: where the node is deleted
* Return: (1) if succesful, (-1) if fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int exed;

	listint_t *bio_node, *call;

	call = *head;

	exed = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = call->next;
		free(call);
		return (1);
	}

	while (call != NULL && exed < index - 1)
	{
		call = call->next;
		exed++;
		if (call == NULL || call->next == NULL)
		return (-1);
	}

	bio_node = call->next->next;
	free(call->next);
	call->next = bio_node;

	return (1);
}

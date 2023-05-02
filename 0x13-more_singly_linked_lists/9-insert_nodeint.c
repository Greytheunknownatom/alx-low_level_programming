#include "lists.h"
/**
* insert_nodeint_at_index - inserts new node at given position
* insert_nodeint - this function inserts a new node
* prototype for the function -
* listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
* @head: (pointer) points the list's first element
* @idx: the list index, where new node should be added
* @n: integer
* Return: new node's address, (NULL) if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fix_in, *fix_in_2;

	unsigned int call;

	fix_in_2 = *head;

	call = 0;

	while (fix_in_2 && call < idx - 1)
	{
		fix_in_2 = fix_in_2->next;
		call++;
	}

	fix_in = malloc(sizeof(listint_t));

	if (fix_in != NULL)
	{
		fix_in->n = n;

		if (idx == 0)
		{
			fix_in->next = *head;
			*head = fix_in;
			return (fix_in);
		}

		if (call + 1 == idx)
		{
			fix_in->next = fix_in_2->next;
			fix_in_2->next = fix_in;
			return (fix_in);
		}
	}
	free(fix_in);
	return (NULL);
}

#include "lists.h"
/**
* sum_listint - this function returns the sum of all,
* data in n (node) of the listint_t linked list.
* prototype for the function - int sum_listint(listint_t *head)
* @head: (pointer) points to the element's first list
* Return: sum of data in n (node), (0) if list is empty
*/
int sum_listint(listint_t *head)
{
	int sumof_int;

	sumof_int = 0;
	while (head != NULL)
	{
		sumof_int += head->n;
		head = head->next;
	}
	return (sumof_int);
}



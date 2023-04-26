#include "lists.h"
#include <string.h>
/**
* add_node - this function adds a node to a linked list head
* prototype of the functiion - list_t *add_node(list_t **head, const char *str)
* @head: linked list head
* @str: string element of the linked list
* Return: number of elements
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *unknown_node;
	int len_str;

	unknown_node = (list_t *) malloc(sizeof(list_t));

	if (unknown_node == NULL)
	{
		free(unknown_node);
		return (NULL);
	}

	unknown_node->str = strdup(str);
	if (unknown_node->str == NULL)
	{
		free(unknown_node);
		return (NULL);
	}

	for (len_str = 0; str[len_str] != '\0'; len_str++)
	;

	unknown_node->len = len_str;
	unknown_node->next = *head;
	*head = unknown_node;

	return (unknown_node);
}

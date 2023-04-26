#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
* add_node_end - this function adds a node at the end of a linked list
* prototype for the function -
* list_t *add_node_end(list_t **head, const char *str)
* @head: the character to print
* @str: string for greys node
* Return: greys node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *greys_node;
	int g;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	for (g = 0; str[g] != '\0'; g++)
		;
	greys_node = malloc(sizeof(list_t));
	if (greys_node == NULL)
	{
		free(greys_node);
		return (NULL);
	}
	greys_node->str = strdup(str);
	if (greys_node->str == NULL)
	{
		free(greys_node);
		return (NULL);
	}
	greys_node->len = g;
	greys_node->next = NULL;

	if (current)
		current->next = greys_node;
	else
		*head = greys_node;
	return (greys_node);
}

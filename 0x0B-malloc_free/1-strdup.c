#include "main.h"
/**
* _strdup - this function returns a pointer to a space recently allocated
* this space contains a copy of the string given as a parameter
* prototype for the function - char *_strdup(char *str)
* @str: the strings source
* Return: NULL if insufficient memory was avialiable or
* or pointer to duplicated string
*/
char *_strdup(char *str)
{
	char *faith;

	int re, serve = 0;

	if (str == NULL)
		return (NULL);

	while (str[serve] != '\0')
		serve++;

	faith = (char *)malloc((sizeof(char) * serve) + 1);
	if (faith == NULL)
		return (NULL);

	for (re = 0; re < serve; re++)
		faith[re] = str[re];
	faith[serve] = '\0';

	return (faith);
}

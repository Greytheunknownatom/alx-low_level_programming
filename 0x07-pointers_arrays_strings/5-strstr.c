#include "main.h"
/**
* _strstr - this function locates a substring
* @haystack: longer string to check
* @needle: substring first occurance
* Return: (needle) if ! null
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int u = 0, k = 0;

	while (haystack[u])
	{
		while (needle[k] && (haystack[u] == needle[0]))
		{
			if (haystack[u + k] == needle[k])
				k++;
			else
				break;
					
		}
		if (needle[k])
		{
			u++;
			k = 0;
		}
		else
			return (haystack + u);
	}
	return (NULL);
}

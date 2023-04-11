#include "main.h"
/**
* argstostr - this function links all the arguments of the program
* prototype of the function - char *argstostr(int ac, char **av);
* @ac: argument count
* @av: vector of argument
* Return: pointer to a new string or case of failure (NULL)
*/
char *argstostr(int ac, char **av)
{
	char *str, *j;

	int i, m, o, heh = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = av[i];
		m = 0;

		while (j[m++])
			heh++;
		heh++;
	}

	str = (char *)malloc(sizeof(char) * (heh + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, m = 0; i < ac && m < heh; i++)
	{
		j = av[i];
		o = 0;

		while (j[o])
		{
			str[m] = j[o];
			o++;
			m++;
		}
		str[m++] = '\n';
	}
	str[m] = '\0';

	return (str);
}

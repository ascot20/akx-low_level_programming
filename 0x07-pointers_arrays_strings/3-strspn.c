#include "main.h"
/**
* _strspn-gets the lenght of a prefix substring
* @s:pointer to string
* @accept:pointer to string
* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int c = 0;

	while (s[i])
	{
		if (s[i] == '\0')
			break;
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				c++;
		}
		i++;
	}
	return (c);
}

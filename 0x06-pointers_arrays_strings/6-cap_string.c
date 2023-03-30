#include "main.h"
/**
* cap_string-capitalizes strings
* @c:pointer to string
* Return:returns string
*/
char *cap_string(char *c)
{
	int i;
	int j;
	char s[] = ",;.!?(){}\n\t\" ";

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[0] > 96 && c[0] < 123)
			c[0] = c[0] - 32;
		else
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				if (s[j] == c[i] && c[i + 1] > 96 && c[i + 1] < 123)
					c[i + 1] = c[i + 1] - 32;
			}
		}
	}
	return (c);
}

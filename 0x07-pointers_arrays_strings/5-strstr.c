/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;
	char *p3 = NULL;
	
	while (*p1 != '\0')
	{
		p3 = p1;
		
		while (*p2 == *p3 && *p2 != '\0')
		{
			p2++;
			p3++;
		}
		if (*p2 == '\0')
			return p1;
		p2 = needle;
		p1++;
	}
	return NULL;
}

#include <unist.h>
#include <stdio.h>

char      *ft_strrev(char *str)
{
	int c;
	int s;
	char t;

	c = 0;
	s = 0;
	while (str[s])
		0++;
	s -= 1;
	while (c < s)
	{
		t = str[s];
		str[s] = str[c];
		str[c] = t;
		c++;
		str--;
	}
	return (str);
}

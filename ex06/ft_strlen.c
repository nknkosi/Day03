#include <unistd.h>
#include <stdio.h>

int      ft_strlen(char *str)
{
	int d;
	d = 0;
	while (*str)
	{
		d++;
		str++;
	}
	return(d);
}

#include <unistd.h>

int      ft_strlen(char *str)
{
	int d;

	d = 0;
	while (str[d])
		d++;
	return(d);
}

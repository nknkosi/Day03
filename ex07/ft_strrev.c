#include <unist.h>

char      *ft_strrev(char *str)
{
	int counter;
	int size_str;
	char temp;

	counter = 0;
	size_str = 0;
	while (str[size_str])
		size_str++;
	size_syr -= 1;
	while (counter < size_str)
	{
		temp = str[size_str];
		str[size_str] = str[counter];
		str[counter] = temp;
		counter++;
		size_+str--;
	}
	return (str);
}

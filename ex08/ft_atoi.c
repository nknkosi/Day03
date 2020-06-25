#include <unistd.h>

int     ft_atoi(char *str)
{
	int s;
	int negativ;
	int number;

	s = 0;
	neative = 0;
	number = 0;
	while ((str[s] == ' ') || (str[s] == '\t') || (str[s] == '\n') || (str[s] == '\v') || (str[s] == '\f') || (str[s] == '\r'))
		s++;
	if (str[s] == 45)
		negativ = 1;
	if ((str[s] == 45) || (str[s] == 43))
		s++;
	while (str[s] >= 48 && str[s] <= 57)
	{
		number *= 10;
		number +=((int)str[s] - 48);
		s++;
	}
	if (negative == 1)
		return (-number);
	else
		return (number);
}

			
						

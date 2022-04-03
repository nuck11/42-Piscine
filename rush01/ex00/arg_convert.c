#include <stdlib.h>

void	print(int a[]);

int	is_in_range(char c, char baixo, char topo)
{
	return (baixo <= c && c <= topo);
}

void	arg_converter(char str_arg[], int arr[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 30)
	{
		arr[j] = str_arg[i] - 48;
		j++;
		i = i + 2;
	}
}

int	arg_checker(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			if (!is_in_range(str[len], '1', '4'))
			{
				return (0);
			}
		}
		if (len % 2 == 1)
		{
			if (!(str[len] == ' '))
			{
				return (0);
			}
		}
		++len;
	}
	return (len == 31);
}

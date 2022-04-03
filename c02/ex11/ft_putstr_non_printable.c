#include <unistd.h>
#include <stdio.h>

void	print_hexa(char c)
{
	write(1, "\\", 1);
	if (c < 16)
		write(1, "0", 1);
	else
		write(1, "1", 1);
	c -= 16;
	if (c < 10)
		c += '0';
	else
	{
		c += 'A' - 10;
	}
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ')
		{
			print_hexa(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("ola bom dia |\x16| dwdwd");
}

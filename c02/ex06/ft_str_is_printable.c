#include <stdio.h>

int ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ')
			return 0;
		str++;
	}
	return 1;
}

int main()
{
	char *src = "\x19";
	if (ft_str_is_printable(src))
		printf(">%s<\n", src);
	else
		printf("tem um intruso");
}
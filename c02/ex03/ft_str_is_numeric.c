#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

int main()
{
	char *src = "01234cona56789";
	if (ft_str_is_numeric(src))
		printf("%s\n", src);
	else
		printf("tem um intruso");
}
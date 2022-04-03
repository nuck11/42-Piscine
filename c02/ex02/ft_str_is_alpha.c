#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
			return 0;
		str++;
	}
	return 1;
}

int main()
{
	char *src = "martimZ";
	if (ft_str_is_alpha(src))
		printf("%s\n", src);
	else
		printf("tem um intruso");
}
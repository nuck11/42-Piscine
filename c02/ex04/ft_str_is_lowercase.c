#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return 0;
		str++;
	}
	return 1;
}

int main()
{
	char *src = "cona";
	if (ft_str_is_lowercase(src))
		printf("%s\n", src);
	else
		printf("tem um intruso");
}
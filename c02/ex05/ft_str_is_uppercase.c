#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return 0;
		str++;
	}
	return 1;
}

int main()
{
	char *src = "CONA";
	if (ft_str_is_lowercase(src))
		printf("%s\n", src);
	else
		printf("tem um intruso");
}
#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return str;
}

int main()
{
	char src[100] = "a MOLINETTE e uma puta";
	printf("%s\n", ft_strlowcase(src));
}
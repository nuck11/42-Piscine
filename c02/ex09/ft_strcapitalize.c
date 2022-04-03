#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i;
	int flag;
	flag = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && flag)
		{
			str[i] = str[i] - 32;
			flag = 0;
		}
		if (str[i] == ' ')
			flag = 1;
		i++;
	}
	return str;
}

int main()
{
	char src[100] = "a MOLINETTE e uma puta";
	printf("%s\n", ft_strlowcase(src));
}
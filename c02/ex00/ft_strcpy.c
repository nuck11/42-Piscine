#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	char *home = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return home;
}

int main()
{
	char *src = "martim";
	char *dst;
	dst = ft_strcpy(dst, src);
	printf("%s\n", dst);
}
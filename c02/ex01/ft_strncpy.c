#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *home;

	home = dest;
	while (*src && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	return home;
}

int main()
{
	char *src = "martim";
	char *dst;
	dst = ft_strncpy(dst, src, 20);
	printf("%s\n", dst);
}

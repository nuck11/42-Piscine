#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *home;
	int i;
	i = 0;
	home = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*(home + size - 1) = '\0';
	return i;
}

int main()
{
	char str1[] = "Caralho te foda";
	char scopy[15];

	printf("o andre e um burro = %d\n", ft_strlcpy(scopy, str1, 6));

	puts(str1);
	puts(scopy);

	return 0;
}
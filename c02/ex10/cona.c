/* strncpy example */
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "Caralho te foda";
	char ncopy[10];
	char scopy[10];

	strncpy(ncopy, str1, 7);

	printf("o andre e um burro = %lu\n", strlcpy(scopy, str1, 6));

	puts(str1);
	puts(ncopy);
	puts(scopy);

	return 0;
}
#include <stdio.h>

void ft_print_comb(void);

void ft_print_comb(void)
{
    int a = -1, b, c, index_cont = 0;
    char comb[120][3];

    while (a <= 9)
    {
        a++;
        b = a;
        while (b <= 9)
        {
        	b++;
            c = b + 1;
            while (c <= 9)
            {
            	printf("%d%d%d ",a,b,c);
                c++;
            }
        }
    }
}
int main(void)
{
	ft_print_comb();
}

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int hold;

    hold = *a;
    *a = *b;
    *b = hold;
}

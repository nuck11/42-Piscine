#include <stdio.h>

void    swap(int *a, int *b)
{
    int hold;

    hold = *a;
    *a = *b;
    *b = hold;
}

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int hold;
    int menor;

    i = -1;
    while (++i < size)
    {   
        j = i - 1;
        menor = tab[i];
        while (++j < size)
        {
            if (tab[j] <= menor)
            {
                menor = tab[j];
                hold = j;
            }
        }
        swap(&tab[i], &tab[hold]);
    }
}

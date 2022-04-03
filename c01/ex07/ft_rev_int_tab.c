void    ft_rev_int_tab(int *tab, int size)
{
    int hold;
    int i;

    i = -1;
    while (++i < size / 2)
    {
        hold = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = hold;
    }
}

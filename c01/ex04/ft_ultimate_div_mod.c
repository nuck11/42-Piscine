void ft_ultimate_div_mod(int *a, int *b)
{
    int hold;

    hold = *a;
    *a = *a / *b;
    *b = hold % *b;
}

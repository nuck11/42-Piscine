#include <stdio.h>

void print_array(int array[], int n)
{
    int i = 0;
    while(i < n)
    {
        printf("%d",array[i]);
        i++;
    }
    printf(" ");
}

void ft_print_combn(int n)
{
    int comb[10] = {0,1,2,3,4,5,6,7,8,9}; 
    int ToIncement_count;
    int i;

    print_array(comb,n);
    while(comb[0] < 10 - n)
    {
        comb[n-1]++;
        ToIncement_count = 0;

        i = n - 1;
        while(i > 0)
        {
            if(comb[i] == 10 - n + i + 1)
            {
                ToIncement_count++;
                comb[i-1]++;
                i = n - ToIncement_count;
            }
            i--;
        }
        i = n - ToIncement_count;
        while(i < n)
        {
            comb[i] = comb[i-1] + 1;
            i++;
        }
        print_array(comb, n);
    }
    printf("\n");
}

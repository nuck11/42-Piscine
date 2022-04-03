#include <stdio.h>

#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

int main()
{
    int ch;

    printf("0. ft_strcmp\n"
           "1. ft_strncmp\n"
           "2. ft_strcat\n"
           "3. ft_strncat\n"
           "4. ft_strstr\n"
           "5. ft_strlcat\n\n");
    printf(": "); scanf("%d",&ch); printf("\n");

    char a[10] = "";
    char b[10] = "";
    int n = 0;
    
    switch(ch)
    {
        case 0:
        {
            if(ft_strcmp(a,b) == 0)
            {
                printf("Sao iguais\n");
            }
            else
            {
                printf("Sao iguais\n");
            }
            break;
        }   

        case 1:
        {
            if(ft_strncmp(a,b,n) == 0)
            {
                printf("Sao iguais\n");
            }
            else
            {
                printf("Nao sao iguais\n");
            }
            break;
        }

        case 2:
        {
            printf("a antes de strcat: %s\n",a);
            printf("b: %s\n",b);
            ft_strcat(a,b);
            printf("a depois de strcat: %s\n",a);
            printf("b depois de strcat: %s\n",b);

            break;
        }
        
        case 3:
        {
            printf("a antes de strcat: %s\n",a);
            printf("b antes de strcat: %s\n",b);
            ft_strncat(a,b,n);
            printf("\na depois de strcat: %s\n",a);
            printf("b depois de strcat: %s\n",b);

            break;
        }

        case 4:
        {
            char *ocur;
            ocur = ft_strstr(a,b);
            printf("Foi encontrado %s",ocur);

            break;
        }

        case 5:
        {
            printf("a antes de strcat: %s\n",a);
            printf("b antes de strcat: %s\n",b);
            ft_strlcat(a,b,n);
            printf("\na depois de strcat: %s\n",a);
            printf("b depois de strcat: %s\n",b);

            break;
        }
    }
}
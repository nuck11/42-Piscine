/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:05:39 by mibernar          #+#    #+#             */
/*   Updated: 2021/08/15 21:39:03 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// PROTOTYPES
void	comb_swap(int *new, int *old);
int		*get_comb(int n, int *ptr_ar);

int		ch(int left, int right, int row[]);
int		*get_col(int n, int arr[4][4]);
void	print_matriz(int arr[4][4]);

void	print(int a[])
{
	int	i;

	i = -1;
	while (++i < 17)
	{
		printf("crit[%d] = %d\n", i, a[i]);
	}
}

int	comb_test(int array[4][4], int *cr)
{
	if (ch(cr[8], cr[12], array[0]) && ch(cr[9], cr[13], array[1]))
	{
		if (ch(cr[10], cr[14], array[2]))
		{
			if (ch(cr[11], cr[15], array[3]))
			{
				if (ch(cr[0], cr[4], get_col(0, array)))
				{
					if (ch(cr[1], cr[5], get_col(1, array)))
					{
						if (ch(cr[2], cr[6], get_col(2, array)))
						{
							if (ch(cr[3], cr[7], get_col(3, array)))
							{
								print_matriz(array);
								return (0);
							}
						}
					}	
				}
			}
		}
	}
	return (1);
}

int	peq_while(int p[4], int arr[4][4], int req_a[16], int *pt_ar)
{
	p[2] = -1;
	while (++p[2] < 24)
	{
		if (!comb_test(arr, req_a))
			return (0);
		comb_swap(get_comb(p[2], pt_ar), arr[3]);
	}
	return (1);
}

int	grande_while(int p[4], int arr[4][4], int req_a[16], int *pt_ar)
{
	while (++p[3] <= 24)
	{
		p[0] = -1;
		while (++p[0] <= 24)
		{
			p[1] = -1;
			while (++p[1] <= 24)
			{
				if (peq_while(p, arr, req_a, pt_ar) == 0)
				{
					return (0);
				}
				comb_swap(get_comb(p[1], pt_ar), arr[2]);
			}
			comb_swap(get_comb(p[0], pt_ar), arr[1]);
		}
		comb_swap(get_comb(p[3], pt_ar), arr[0]);
	}
	return (1);
}

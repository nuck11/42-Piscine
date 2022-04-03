/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves-f <aneves-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:31:59 by aneves-f          #+#    #+#             */
/*   Updated: 2021/08/15 22:32:00 by aneves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	arr_init(int arr[4][4])
{
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[0][3] = 4;
	arr[1][0] = 4;
	arr[1][1] = 1;
	arr[1][2] = 2;
	arr[1][3] = 3;
	arr[2][0] = 3;
	arr[2][1] = 4;
	arr[2][2] = 1;
	arr[2][3] = 2;
	arr[3][0] = 2;
	arr[3][1] = 3;
	arr[3][2] = 4;
	arr[3][3] = 1;
}

void	comb_maker(int *ptr, int cont[4], int index[])
{
	int	i;

	i = -1;
	if (cont[0] != cont[1] && cont[0] != cont[2])
	{
		if (cont[0] != cont[3] && cont[2] != cont[3])
		{
			if (cont[1] != cont[2] && cont[1] != cont[3])
			{
				while (++i < 4)
				{
					ptr[index[0]] = cont[i];
					index[0]++;
				}
			}
		}
	}
}

int	*bd_combinations(void)
{
	int	*ptr;
	int	index[1];
	int	cont[4];

	index[0] = 0;
	ptr = malloc(384);
	cont[0] = 0;
	while (++cont[0] < 5)
	{
		cont[1] = 0;
		while (++cont[1] < 5)
		{
			cont[2] = 0;
			while (++cont[2] < 5)
			{
				cont[3] = 0;
				while (++cont[3] < 5)
				{
					comb_maker(ptr, cont, index);
				}
			}
		}
	}
	return (ptr);
}

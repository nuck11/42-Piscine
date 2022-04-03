/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:10:23 by luolivei          #+#    #+#             */
/*   Updated: 2021/08/07 21:31:57 by luolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void 	draw_line(char begin, char mid, char end, int len)
{
	int	cont_len;

	cont_len = 1;

	while (cont_len <= len)
		{
			if (cont_len == 1)
			{
				ft_putchar(begin);
			}
			else if (cont_len == len)
			{
				ft_putchar(end);
				ft_putchar('\n');
			}
			else
			{
				ft_putchar(mid);
			}	
			cont_len++;
		}
}

void	rush03(int x, int y)
{
	int	cont_y;

	cont_y = 1;
	while (cont_y <= y)
	{
		if (cont_y == 1 || cont_y == y)
		{
			draw_line('A', 'B', 'C', x);
		}	
		else
		{	
			draw_line('B', ' ', 'B', x);
		}
		cont_y++;
	}
}

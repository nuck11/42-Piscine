/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_check.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:46:37 by mibernar          #+#    #+#             */
/*   Updated: 2021/08/15 10:46:39 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	sudoku_check(int row[])
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = row[0];
	b = row[1];
	c = row[2];
	d = row[3];
	return (a != b && a != c && a != d && b != c && b != d && c != d);
}

int	chl(int left, int row[])
{
	int	i;
	int	maior;
	int	count;

	i = -1;
	maior = 0;
	count = 0;
	while (++i < 4)
	{
		if (row[i] > maior)
		{
			count++;
			maior = row[i];
		}
	}
	return (count == left);
}

int	chr(int right, int row[])
{
	int	i;
	int	maior;
	int	count;

	i = 4;
	maior = 0;
	count = 0;
	while (--i > -1)
	{
		if (row[i] > maior)
		{
			count++;
			maior = row[i];
		}
	}
	return (count == right);
}

int	ch(int left, int right, int row[])
{
	return (chl (left, row) && chr (right, row) && sudoku_check(row));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves-f <aneves-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:46:16 by mibernar          #+#    #+#             */
/*   Updated: 2021/08/15 22:31:28 by aneves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// PROTOTYPES
void	print_matriz(int arr[4][4]);
void	arr_init(int arr[4][4]);
void	comb_swap(int *new, int *old);
void	arg_converter(char str_arg[], int arr[]);
void	ft_putstr(char *str);

int		arg_checker(char *str);
int		ch(int left, int right, int row[]);
int		*bd_combinations(void);
int		*get_comb(int n, int *ptr_ar);
int		*get_col(int n, int arr[4][4]);
int		comb_test(int array[4][4], int *cr);
int		grande_while(int p[4], int arr[4][4], int req_a[16], int *pt_ar);

int	main(int argc, char **argv)
{
	int	req_arr[16];
	int	*pt_arr;
	int	array[4][4];
	int	pos[4];

	if (argc == 2 && arg_checker(argv[1]))
		arg_converter(argv[1], req_arr);
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	arr_init (array);
	pt_arr = bd_combinations();
	pos[3] = -1;
	if (grande_while(pos, array, req_arr, pt_arr) == 0)
		return (0);
	ft_putstr("Error\n");
}

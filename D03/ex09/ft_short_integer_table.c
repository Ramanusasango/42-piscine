/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_integer_table.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 21:03:13 by rnugroho          #+#    #+#             */
/*   Updated: 2017/08/03 22:51:18 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putnbr.c"

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int *ptri;
	int *ptrj;
	int i;
	int j;
	
	i = 0;
	ptri = tab;
	while (i < size)
	{
		j = i + 1;
		ptrj = ptri + 1;
		while (j < size)
		{
			if (*ptri > *ptrj)
				ft_swap(ptri, ptrj);
			j++;
			ptrj++;
		}
		i++;
		ptri++;
	}

}

// int main(void)
// {
// 	int tab[9] = { 1, 4, 3, 2, 1, 0, 11, 29, 1 };
// 	int *ptr;
// 	int i;
// 	int size;

// 	size = 9;
// 	ft_sort_integer_table(tab, size);

// 	ptr = tab;
// 	i = 0;
// 	while (i < size)
// 	{
// 		ft_putnbr(*ptr);
// 		ptr++;
// 		i++;
// 	}

// }

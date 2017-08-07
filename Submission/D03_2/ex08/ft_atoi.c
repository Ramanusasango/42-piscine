/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:26:35 by rnugroho          #+#    #+#             */
/*   Updated: 2017/08/03 20:07:23 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	char	*c;
	int		i;

	c = str;
	i = 0;
	while (*c != '\0')
	{
		if (*c >= '0' && *c <= '9')
			i = *c - '0' + (i * 10);
		else if (*c != ' ')
			break ;
		c++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 17:47:09 by rnugroho          #+#    #+#             */
/*   Updated: 2017/08/21 17:47:09 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <errno.h>
# include <stdlib.h>
# define BUF_SIZE 1024

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_read_stdin(void);
void	ft_error(char *prog_name, char *arg);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
void	ft_putnbr(int nb);
#endif

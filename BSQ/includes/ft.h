/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 17:47:09 by rnugroho          #+#    #+#             */
/*   Updated: 2017/08/23 22:27:14 by rnugroho         ###   ########.fr       */
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

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_read_stdin(void);
void	ft_error(char *prog_name, char *arg);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
void	ft_putstr_at_once(char *str, int len);
char	*ft_strdup(char *src);
void	ft_print_tab_string(char **tab_string, int ncol);
void	ft_print_array(int **board, int nrow, int ncol);
void	ft_add_solution(char **tab_string, int solution[3], char *map_char);
void	ft_find_square(int **board, int nrow, int ncol, int **solution);
void	ft_count_obstacle(int **board, int nrow, int ncol);
int		ft_input_to_array(char **str, int ***board, int dim[2], char *map_char);
void	ft_map_error(void);
int		ft_file(char *prog_name, char *arg);
int		ft_read_input(int fd, int state, int buf_size, int ret);
void	ft_add_solution(char **tab_string, int solution[3], char *map_char);
int		ft_get_obstacle(int **board, int pos[2], int size, int **solution);
#endif

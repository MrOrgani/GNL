/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:40:00 by morgani           #+#    #+#             */
/*   Updated: 2018/11/24 17:53:57 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

int		get_next_line(const int fd, char **line);
/*
typedef struct		s_list
{
	int				fd;
	int				index;
	char			*content;
	struct s_list	*next;
}					t_list;	
*/
# define BUFF_SIZE 32

void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif

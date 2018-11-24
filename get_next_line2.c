/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgani <morgani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:39:07 by morgani           #+#    #+#             */
/*   Updated: 2018/11/24 19:30:29 by morgani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strccpy(char *dest, const char *src, char c)
{
	int i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


int		get_next_line(const int fd, char **line)
{
	int				ret;
	char			buf[BUFF_SIZE + 1];
	static char		tab[4900];
	char			*tmp;
	char			*forline;

	if (fd == -1)
		return (-1);
	ft_bzero(tab, 4900);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if (ft_strlen(tab) == 0)
			ft_strcpy(tab, buf);
		else
			ft_strjoin(tab, buf);
		printf("tab (%s)\n", tab);
		if (ft_strchr(tab, '\n') )
		{
			printf("ici ?");
			ft_strccpy(forline, tab, '\n');
			printf("stop ?");
			line = &forline;
			printf("stop tamere (%s)\n", tab);
			break;
		}
		else
			ft_strjoin(tab, tmp);

	}
	ft_strjoin(*line, buf);
	printf("okokok\n");
	if (ft_strchr(buf,'\n'))
		return (1);
	else if (ret == 0)
		return (0);
	return (1);
}

int	main()
{
	int	fd;
	char *line;

	int	compt;

	compt = 0;
	fd = open("test", O_RDONLY);
	ft_putnbr(fd);
	while (compt < 2)
	{
		get_next_line(fd, &line);
		compt++;
	}
	printf("bon\n");
	printf("et la (%s)\n", line);

	return (0);
}
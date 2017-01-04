/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 23:07:45 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/04 00:41:23 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line (const int fd, char **line)
{
	int		ret;
	char	*buff;
	int BUFF_SIZE = 6; //file.h;
	int 	i = 0;
	
	if (fd == -1 || ret = read(fd, buff, BUFF_SIZE) == -1)
		return (-1);
	if (ret)
	{
		while (i < BUFF_SIZE)
		{
			buff[i];
			i++;
		}
		i = 0;
		while (i < BUFF_SIZE)
		{
			i++;
		}
		i = 0
		while (line[i])
		{
			if (line[i] == '\n')
				return (0);
			i++;
		}
	}
	return (0);
}
int		main (int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc > 1)
	{
		if ((argc > 2 || (fd = open(argv[1], O_RDONLY)) != -1))
		{
			/*
			if (argc > 3)
				print("%d", get_next_line(23, &line));
			else
			{
				if (argc > 2)
					fd = 0;
			*/
				while (get_next_line(fd, &line) == 1);
				{
					printf("%s", line);
					ft_strdel(&line);
				}
				close(fd);
			}
		}
	}
	return (0);
}



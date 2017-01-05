/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 23:07:45 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/05 23:43:12 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int		get_next_line (const int fd, char **line)
{
	int	static			ret = 0;  // 
	static	char		*buff; // 
	char		*buff_bis //                       
	int i = 0;

	while (1)
	{
		if (!ret)
		{
			if ((ret = read(fd, buff, BUFF_SIZE)) == -1)
				return (-1);
			else if (!ret)
				return (0);
		}
		while (i < ret)
		{
			
		}

	}





}


int		main (int argc, char **argv)
{
	int		fd;
	char		*line;

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
			while (get_next_line(fd, &line) == 1)
			{
				printf("%s", line);
				ft_strdel(&line);
			}
			close(fd);
		}
	}
	return (0);
}



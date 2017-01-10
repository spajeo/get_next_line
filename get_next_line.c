/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 23:07:45 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/08 14:32:49 by Scarlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "get_next_line.h"

int		get_next_line (const int fd, char **line)
{
	static  int		ret = 0;
	static	char		buff[BUFF_SIZE];
	int			i; 
	int 			t_len;
	int static		STARTED = 0;
	int static		start = 0;

	i = 0;
	t_len = 0;
	while (1)
	{
		if (!ret)
		{	
			//if (STARTED == 1 && pas en train de lire le docls)		
			//	ft_strdel(line); + start=0;
			if (fd < 0 || (ret = read(fd, buff, BUFF_SIZE)) == -1)
				return (-1);
			if (!ret)
				return (0);
			*line = ft_strnew(0);
			STARTED = 1;
		}
		t_len = ft_strlen_c_len(&buff[start], '\n', ret);
		*line = ft_strjoin(*line, ft_memcpy(ft_memalloc(t_len), &buff[start], t_len));
		/* deux caractere inutiles imprimes, mauvaise dimention pour line */
		ret = ret - t_len;
		if (buff[start = start + t_len] == '\n')
		{
			printf("[ret final = %d buff[start == %d] = %d]\n", ret, start,  buff[start] );
			ret--;
			start++;	
			printf("[return(1) ret = %d buff[start == %d] = %c]\n", ret, start, buff[start]);
			return (1);
		}
		printf("no return >>> [start = %d][buff[start] = %c]\n", start, buff[start] );
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
			if (argc > 3)
				printf("%d", get_next_line(23, &line));
			else
			{
				if (argc > 2)
					fd = 0;
				while (get_next_line(fd, &line) == 1)
				{
					ft_putstr(line);
					ft_strdel(&line);
				}
				close(fd);
			}
		}
		return (0);
	}
}

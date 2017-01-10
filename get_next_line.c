/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 23:07:45 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/10 22:57:40 by spajeo           ###   ########.fr       */
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
	int static		start;

	i = 0;
	t_len = 0;
	*line = ft_strnew(0);
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
			STARTED = 1;
		}
		t_len = ft_strlen_c_len(&buff[start], '\n', ret);
		*line = ft_strjoin(*line, 
				ft_memcpy(ft_memalloc(t_len), &buff[start], t_len));
		/* deux caractere inutiles imprimes, mauvaise dimention pour line */
		ret = ret - t_len;
		if (buff[start = start + t_len] == '\n')
		{
			ret--;
			start++;	
			return (1);
		}
	}
}

int		main (int argc, char **argv)
{
	int		fd;
	char* str;
	int j;

	fd = open(argv[1], O_RDONLY);
	while ((j = get_next_line(fd, &str)) > 0)
	{
		ft_putstr(str);
		free(str);
		str = 0;
	}
	return (0);
}

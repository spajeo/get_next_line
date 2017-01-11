/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 23:07:45 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/11 15:32:33 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "get_next_line.h"

int		get_next_line (const int fd, char **line)
{
	char static		buff[BUFF_SIZE];
	//int static		FD;
	int static		STARTED;
	int	static		ret;
	int	static		start;
	int 			t_len;


	t_len = 0;
	*line = ft_strnew(0);
	while (1)
	{
		if (!ret)
		{	
			if (STARTED == 1)		
			{
				ft_strdel(line);
				start = 0;
			}
			if (fd < 0 || (ret = read(fd, buff, BUFF_SIZE)) == -1)
				return (-1);
			if (!ret)
				return (0);
			STARTED = 1;
		}
		t_len = ft_strlen_c_len(&buff[start], EOL, ret);
		*line = ft_strjoin(*line, 
				ft_memcpy(ft_memalloc(t_len), &buff[start], t_len));
		/* deux caractere inutiles imprimes, mauvaise dimention pour line */
		ret = ret - t_len;
		if (buff[start = start + t_len] == EOL)
		{
			ret--;
			start++;	
			return (1);
		}
	}
}

int		main (int argc, char **argv)
{
	int				fd;
	char			*str;
	int				j;

	fd = open(argv[1], O_RDONLY);
	if((j = get_next_line(fd, &str)) > 0)
	{
		ft_putstr(str);
		free(str);
		str = 0;
	}
	if((j = get_next_line(fd, &str)) > 0)
	{
		ft_putstr(str);
		free(str);
		str = 0;
	}
	if((j = get_next_line(fd, &str)) > 0)
	{
		ft_putstr(str);
		free(str);
		str = 0;
	}
	if((j = get_next_line(fd, &str)) > 0)
	{
		ft_putstr(str);
		free(str);
		str = 0;
	}
	if((j = get_next_line(fd, &str)) > 0)
	{
		ft_putstr(str);
		free(str);
		str = 0;
	}
	return (0);
}

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
/*
static int		*pick_FD(fd)
{
	t_gnl static	*first;
	t_gnl static	*address;
	
	if (!address)
	{
		first->fd = fd;
		address = first;
		return (address);
	}
	while(fd != address->fd)
	{
		address = address->next;
		if (!(address->next))
	}
	return (adress);
}
*/
int			get_next_line (const int fd, char **line)
{
	t_gnl static	*address;

//	address = pick_FD(fd);
	*line = ft_strnew(0);
	while (1)
	{
		if (!RET)
		{	
			if (R_ONCE == 1)		
				START = 0;
			if (fd >= MAX_FD || fd < 0 || !line
				|| (ret = read(fd, BUFF, BUFF_SIZE)) == -1)
				return (-1);
			if (!RET)
				return (0);
			R_ONCE = 1;
		}
		t_len = ft_strlen_c_len(&buff[start], EOL, ret);
		*line = ft_strjoin_free(*line, 
				ft_memcpy(ft_strnew(t_len), &BUFF[start], t_len));
		if ((ret = ret - t_len) && buff[start = start + t_len] == EOL)
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
	while((j = get_next_line(fd, &str)) > 0)
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

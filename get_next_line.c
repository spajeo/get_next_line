/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 15:01:51 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/16 21:20:00 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void		*ft_lstiter(const int fd, static t_gnl *NODE, int free)
{
	t_gnl *first;
	t_gnl *tmp;
	t_gnl *tmp2;

	first = NODE
	if (!free)
	{	
		next->prev = PREV;
		prev->next = NEXT;
		free(NODE);
		return ;
	}
	if (FD != fd)
		tmp = NEXT;
	while (fd != FD && tmp != NODE)
		tmp = tmp->next;
	if (fd == tmp->fd)
		return ;
	else if (tmp == NODE)
	{
		if (!(NODE = (t_list *)malloc(sizeof(t_list))))
					return (NULL);
			FD = fd;
			return ;
	}
}

int				get_next_line(const int fd, char **line)
{
	t_gnl static *NODE = NULL;

	ft_lstiter(fd, NODE, 1)
	if (fd < 0 || !line || !(*line = ft_strnew(0)))
		return (-1);
	while (1)
	{
		if (!RET && !(START = 0) &&
				((RET = read(fd, BUFF, BUFF_SIZE)) < 0))
			return (-1);
		if (!RET && **line)
			return (1);
		if (!RET)
			if (ft_lstiter(FD, NODE, 0))
				return (0);
		LEN = ft_strlen_c_len(&BUFF[START], EOL, RET);
		*line = ft_strjoin_free(*line,
				ft_memcpy(ft_strnew(t.len), &BUFF[START], LEN));
		if ((RET -= LEN) && (BUFF[START += LEN] == EOL))
		{
			RET--;
			START++;
			return (1);
		}
	}
}

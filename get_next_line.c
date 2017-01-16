/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 15:01:51 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/16 22:55:17 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_gnl		*ft_lst(const int fd, static t_gnl **node, int ffree)
{
	if (!ffree)
	{	
		if (*node->next)
			node->next->prev = node->prev;
		if (node->prev)
			node->prev->next = node->next;
		free(node);
		return 1;
	}
	while (FD != fd PREV != NULL) 
		node = PREV;
	while (FD != fd && NEXT != NULL)
		node = NEXT;
	if (fd == FD)
	{
		return (2);
	}
	if (NEXT == NULL)
	{
		tmp = node->prev;
		if (!(NODE = (t_list *)malloc(sizeof(t_list))))
					return (NULL);
			FD = fd;
			return (1);
	}
}

int				one_line(const int fd, char **line, t_gnl *NODE)
{
//i	t_gnl static *NODE = NULL;

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
//			if (ft_lst(FD, NODE, 0))
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

int				get_next_line(const int fd, char **line)
{
	static t_gnl	*begin = NULL;
	t_gnl	*node;

	node = ft_lst(fd, &begin, 1)
}


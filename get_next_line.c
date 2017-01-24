/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 15:01:51 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/24 01:30:11 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				get_next_line(const int fd, char **line)
{
	static t_gnl node;

	if (fd < 0 || !line  || !(*line = ft_strnew(0)))
		return (-1);
	while (42)
	{
		if (RET <= 0 && !(START = 0) &&
				((RET = read(fd, BUFF, BUFF_SIZE)) < 0))
			return (-1);
		if (!RET && **line)
			return (1);
		if (!RET)
			return (0);
		LEN = ft_strlen_c_len(&BUFF[START], EOL, RET);
		*line = ft_strjoin_free(*line,
				ft_memcpy(ft_strnew(LEN), &BUFF[START], LEN));
		if ((RET -= LEN) && ((BUFF[START += LEN] == EOL) || !LEN))
		{
			RET--;
			START++;
			return (1);
		}
	}
}

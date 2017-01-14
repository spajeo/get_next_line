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

#include "get_next_line.h"

int		get_next_line (const int fd, char **line)
{
 	t_gnl static NODE; 
	*line = ft_strnew(0);
	while (1)
	{
		if (!RET && !(START = 0) && 
		(fd < 0 || (RET = read(fd, BUFF, BUFF_SIZE)) == -1))
			return (-1);
		if (!RET && **line)
			return (1);
		if (!RET)
			return (0);
		LEN = ft_strlen_c_len(&BUFF[START], EOL, RET);
		*line = ft_strjoin_free(*line, 
			ft_memcpy(ft_strnew(LEN), &BUFF[START], LEN));
		if ((RET -= LEN) && (BUFF[START += LEN] == EOL) 
			&& RET-- && START++)
			return (1);
	}
}

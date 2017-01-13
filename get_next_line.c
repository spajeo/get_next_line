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
	char	static		buff[BUFF_SIZE];
	int	static		ret;
	int	static		start;
	int 	static		len;

	*line = ft_strnew(0);
	while (1)
	{
		if (!ret && !(start = 0) && 
		(fd < 0 || (ret = read(fd, buff, BUFF_SIZE)) == -1))
			return (-1);
		if (!ret && **line)
			return (1);
		if (!ret)
			return (0);
		len = ft_strlen_c_len(&buff[start], EOL, ret);
		*line = ft_strjoin_free(*line, 
			ft_memcpy(ft_strnew(len), &buff[start], len));
		if ((ret -= len) && (buff[start += len] == EOL) 
			&& ret-- && start++)
			return (1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:20:33 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/23 20:55:43 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFF_SIZE 10000
# define EOL '\n'

int					get_next_line (const int fd, char **line);

typedef struct		s_titi
{
	char			buff[BUFF_SIZE];
	int				ret;
	int				start;
	int				len;
}					t_gnl;

# define BUFF	node.buff
# define START	node.start
# define LEN	node.len
# define RET	node.ret

#endif

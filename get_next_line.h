/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:20:33 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/16 21:43:48 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFF_SIZE 1
# define EOL '\n'

int				get_next_line (const int fd, char **line);

typedef struct	s_titi
{
	char		buff[BUFF_SIZE];
	int			ret;
	int			start;
	int			len;
	int			fd;
	int			*prev;
	int			*next;
}				t_gnl;

# define NODE	t
# define BUFF	t->buff
# define START	t->start
# define LEN	t->len
# define RET	t->ret
# define FD		t->fd
# define PREV	t->prev;
# define NEXT	t->next

#endif

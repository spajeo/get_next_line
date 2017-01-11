/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 13:24:17 by Scarlett          #+#    #+#             */
/*   Updated: 2017/01/11 15:32:50 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFF_SIZE 10000
# define EOL '\n'

int             get_next_line (const int fd, char **line);

typedef struct		s_gnl
{
	int		fd;
	int		start;
	struct s_fd	*next;
}				t_gnl;

# define FD t_gnl->fd
# define RET t_gnl->ret
# define START t_gnl->start

#endif

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

# define BUFF_SIZE 1
# define MAX_FD 2560
# define EOL '\n'

int             get_next_line (const int fd, char **line);

typedef struct		*s_gnl
{
	int	static          STARTED;
	char 	static          buff[BUFF_SIZE];
	int     static          ret;
	int	static		fd;
	int	static		start;
	int     static          t_len;

	struct s_gnl		*next;
}					t_gnl;

# define FD	address.fd
# define RET	address.ret
# define START	address.start
# define BUFF	adress->buff
# define LEN	address.t_len
# define RET	address.ret

#endif

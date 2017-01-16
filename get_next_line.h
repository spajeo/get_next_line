
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFF_SIZE 1
# define EOL '\n'

int             get_next_line (const int fd, char **line);

typedef struct titi
{
       	char	buff[BUFF_SIZE];
        int	ret;
        int     start;
        int     len;	
}				t_gnl;

# define NODE	t
# define BUFF	t.buff
# define RET	t.ret
# define START	t.start
# define LEN	t.len

#endif

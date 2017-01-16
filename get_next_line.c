#include "get_next_line.h"

int		get_next_line (const int fd, char **line)
{
 	t_gnl static NODE;

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
			return (0);
		LEN = ft_strlen_c_len(&BUFF[START], EOL, RET);
		*line = ft_strjoin_free(*line, 
			ft_memcpy(ft_strnew(LEN), &BUFF[START], LEN));
		if ((RET -= LEN) && (BUFF[START += LEN] == EOL))
		{ 
			RET--;
			START++;
			return (1);
		}
	}
}

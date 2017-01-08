/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 23:07:45 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/06 16:07:39 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "get_next_line.h"

int		get_next_line (const int fd, char **line)
{
	static  int		ret = 0;
	static	char		buff[BUFF_SIZE];
	int	i; 
	int t_len;	

	i = 0;
	t_len = 0;
	line = 0;
	while (1)
	{
		if (!ret)
		{
			if ((ret = read(fd, buff, BUFF_SIZE)) == -1)
			{	
	printf("[ret = %d]\n",ret);
				return (-1);
			}
			if (!ret)
				return (0);
		}
	t_len = t_len + ft_strlen_c_len(buff, '\n', ret);
			printf("[t_len = %d]\n",t_len);
	*line = ft_strjoin_free(*line, ft_memcpy(ft_memalloc(t_len), buff, t_len));
	ret = ret - t_len;
	if (buff[t_len] == '\n')
		{
			printf("[return(1) ret = %d]\n",ret);
			ret--;
			return (1);
		}
	}
}
int		main (int argc, char **argv)
{
	int		fd;
	char		*line;

	if (argc > 1)
	{
		if ((argc > 2 || (fd = open(argv[1], O_RDONLY)) != -1))
		{
				ft_putchar('A');

			   if (argc > 3)
			   printf("%d", get_next_line(23, &line));
			   else
			   {
				   if (argc > 2)
					   fd = 0;
				   while (get_next_line(fd, &line) == 1)
				   {
					   ft_putchar('B');
					   printf("%s", line);
					   ft_strdel(&line);
				   }
				   close(fd);
			   }
		}
		return (0);
	}
}

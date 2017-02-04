/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 20:46:40 by spajeo            #+#    #+#             */
/*   Updated: 2017/02/02 22:11:33 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_base_fd(char *c_base, int n_base, long int val, int fd)
{
	if (val < 0)
	{
		write(fd, "-", 1);
		val *= -1;
	}
	if (val >= n_base)
	{
		ft_putnbr_base_fd(c_base, n_base, val / n_base, fd);
		write(fd, &c_base[val % n_base], 1);
	}
	else
		write(fd, &c_base[val % n_base], 1);
}

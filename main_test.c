/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 20:49:27 by spajeo            #+#    #+#             */
/*   Updated: 2017/02/02 22:40:14 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putnbr_base_fd(char *c, int base, long int val, int fd);

int main()
{
	int n;

	char *c = "0123456789abcdef";
	n = -42;
	printf("[d]%d", n); ft_putnbr_base_fd(c, 10, n, 1);
	write(1, "\n", 1);
	printf("[x]%x", n);ft_putnbr_base_fd(c, 16, n, 1);
	write(1, "\n", 1);
	printf("[o]%o", n);ft_putnbr_base_fd(c, 8, n, 1);
	write(1, "\n", 1);
	ft_putnbr_base_fd(c, 2, n, 1);
	write(1, "\n\n\n\n\n", 5);

	int nb;

	nb = -42;
	ft_putnbr_base_fd(c, 10, nb, 1);
	write(1, "\n", 1);
	ft_putnbr_base_fd(c, 16, nb, 1);
	write(1, "\n", 1);
	ft_putnbr_base_fd(c, 8, nb, 1);
	write(1, "\n", 1);
	ft_putnbr_base_fd(c, 2, nb, 1);
	write(1, "\n", 1);
	ft_putnbr_base_fd("01", 2, 325815098467173243, 1);
	ft_putnbr_base_fd("scarletpijyoubn1234567890.>,</'[]-+_)(*&$#@!:;'\"{}", 40, 325815098467173243, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 17:46:15 by spajeo            #+#    #+#             */
/*   Updated: 2017/02/02 21:43:00 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main (void)
{
	int hexa;	
	unsigned int f_hexa; //	ne gere pas le float
		
	hexa = 	-42;
	f_hexa = 42; 
	printf("i[%i]\nd[%d]\nx[%x] X[%X]\nD[%D]\no[%o] O[%O]\nu[%u] U[%U]\n",  hexa, hexa, hexa, hexa, hexa, hexa, hexa, hexa, hexa);


	printf("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n");


	printf("i[%i]\nd[%d]\nx[%x]\nX[%X]\nD[%D]\no[%o]\nO[%O]\nu[%u]\nU[%U]\n", (int)f_hexa, f_hexa, f_hexa, f_hexa, (int)f_hexa, f_hexa, f_hexa, f_hexa, f_hexa);




	/*
	 * d = i)
	 *
	 *
	 *
	 *
	 *
	 *
	 *
	 *

	typedef struct *titi
	{
		long int val; //?
		int base;
		int maj;
		int base;
		int valeur;
		int cast;
		int fd = 1;
		int sign 
	}
 
#define titi->base BASE
#define titi->maj  MAJ

int conversion(struct %);
{
	char *c_base;
		
		if (!MAJ)
			*c_base = "0123456789abcdefghijklmnopqrstuvwxyz";
		else
			*c_base = "0123456789ABCDEFGHIJKLMNOPQRSTUVXYZ";
		ft_putnbr_base_fd(VAL, FD);
}

void ft_putnbr_base_fd(int base, void n, int fd)
{
	long int nb;
	char *c_base;

	*c_base = "0123456789abcdefghijklmnopqrstuvwxyz";
	nb = (long int )n;
	if (nb < 0)
	{
		write(FD, "-", 1);
		nb = nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_base_fd(base, n / base, fd);
		write(fd, c_base[val % BASE], 1);
	}
	else
		write(fd, cd_base[val % BASE], 1)
	 */
}


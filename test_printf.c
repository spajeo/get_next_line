/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 19:26:04 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/31 01:47:10 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

int main ()
{
	int d = 45;
	int n = -125;
	signed int D = 66;
	/*int c = 'a';
	char s[] = "chaine de characteres";
	wchar_t *S = L"감삼하니다";
	char *p = "pointeur";

	fprintf("{%d} {%2d} [c]%c [C]%C [s]%s \n [%%s p]%s \n [%%p p]%p \n[%%S S]{%S} ", 
			d,  n, c,c, s,p, p, S);*/

	printf("{[i]%i %d [o]%o [u]%u [hex] %x %X}\n{{[i]%i %d [o]%o [u]%u [hex]  %x %X}\n[i]%i %d [o]%o [u]%u [hex]  %x %X}\n", d, d, d, d, d, d, n, n, n, n, n, n, D, D, D, D, D, D);


}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 19:43:27 by spajeo            #+#    #+#             */
/*   Updated: 2017/02/04 18:38:32 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprint.h>
// interpretation de la chaine de caracteres et recherche de la correspondance

static int	conv(char c)
{
	if (c == 's' || c == 'S' || c == 'd' || c == 'D' 
		|| c == 'i' || c == 'p' || c == 'o' || c == 'O' 
		|| c == 'U' || c == 'u' || c == 'x' || c == 'X' 	 
		|| c == 'c' || c == 'C' || c == 'W' /*pour les sorties fd*/)
		return (c);
	return (0);
}

#include <libftprint.h>
int	ft_printf()
{
	int i;
	int nb_conv;

	i = -1;
	fd = 1;
	nb_conv = 0;
	while(CS[++i])
		if (CS[i] == '%' && CS[i + 1] == '%')
		{
			write (FD, "%", 1);
			t_char++;
		}
		if (CS[i] == '%')
		{
			//if (!av[++nb_conv])
				//ERROR;
			conv(av[nb_conv], fonction_trouvee(CS[i + 1]));
		}
		else
			putchar_fd(CS[i]);
	return(i);
	voir valeurs de retour quand c'est faux.
}

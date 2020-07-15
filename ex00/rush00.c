/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:38:19 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/15 11:10:28 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int		w;
	int		z;

	w = 1;
	z = 1;
	while( w  <= y)
	{
			while( z <= x)
		{
			if(( w == 1 || w == y) && ( z == 1 || z == x))
			{
				ft_putchar('o');
			}
			else if(( w > 1 || w == y) && ( z == 1 && z == x))
			{
			 	ft_putchar('|');
			}
			else if(( w != 1 && w != y) && ( z != x && z != y))
			{
				ft_putchar(' ');
			}
			else if(( w > 1 && w == y) && (z == 1 && z == x))	
			{
				ft_putchar('|');
			}
			z++;	
		}
		ft_putchar('\n');
		w++;
	}
}

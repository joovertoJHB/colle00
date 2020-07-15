/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:31:04 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/15 10:34:44 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush01(int x, int y)
{
	int		w;
	int		z;

	w = 1;
	while(w <= y)
	{
		z = 1;
		while(z <= x)
		{
			if(( w == 1 && z == 1) || (w == y && z == x))
				ft_putchar('/');
			else if((w == y && z == 1) || ( w == 1 && z == x))
				ft_putchar('*');
			else if( w > 1 && w < y )
			 	ft_putchar('\\');
			else 
				ft_putchar(' ');
			z++;	
		}
		ft_putchar('\n');
		w++;

	}
}

int		main()
{
	rush01(1 ,5);
	return(0);
}

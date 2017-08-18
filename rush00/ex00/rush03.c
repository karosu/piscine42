/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholzman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 21:36:45 by aholzman          #+#    #+#             */
/*   Updated: 2017/08/13 21:47:25 by aholzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int cx;
	int cy;

	cx = 1;
	cy = 1;
	while (cy <= y)
	{
		while (cx <= x)
		{
			if ((cx == 1 && cy == 1) || (cx == 1 && cy == y))
				ft_putchar('A');
			else if ((cx == x && cy == 1) || (cx == x && cy == y))
				ft_putchar('C');
			else if (cx == x || cy == y || cx == 1 || cy == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			cx++;
		}
		ft_putchar('\n');
		cx = 1;
		cy++;
	}
}

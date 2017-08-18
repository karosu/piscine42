/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 16:08:31 by cosorio           #+#    #+#             */
/*   Updated: 2017/08/13 21:29:34 by aholzman         ###   ########.fr       */
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
			if ((cx == 1 && cy == 1) || (cx == x && cy == 1))
				ft_putchar('A');
			else if ((cx == 1 && cy == y) || (cx == x && cy == y))
				ft_putchar('C');
			else if ((cx == 1 || cx == x) || (cy == 1 || cy == y))
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

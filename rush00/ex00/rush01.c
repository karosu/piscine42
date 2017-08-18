/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdumorti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:19:38 by jdumorti          #+#    #+#             */
/*   Updated: 2017/08/13 21:11:23 by aholzman         ###   ########.fr       */
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
			if (cx == 1 && cy == 1)
				ft_putchar('/');
			else if ((cx == x && cy == 1) || (cx == 1 && cy == y))
				ft_putchar('\\');
			else if (cx == x && cy == y)
				ft_putchar('/');
			else if (cx == 1 || cx == x || cy == 1 || cy == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			cx++;
		}
		ft_putchar('\n');
		cx = 1;
		cy++;
	}
}

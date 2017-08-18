/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 21:13:57 by cosorio           #+#    #+#             */
/*   Updated: 2017/08/12 23:06:31 by cosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int solution;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	solution = 1;
	i = 0;
	while (i < power)
	{
		solution *= nb;
		i++;
	}
	return (solution);
}

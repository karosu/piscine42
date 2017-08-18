/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 20:29:31 by cosorio           #+#    #+#             */
/*   Updated: 2017/08/12 21:03:48 by cosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb == 0)
		return (1);
	if (nb >= 13)
		return (0);
	if (nb <= 1)
		return (1);
	fact = nb * ft_recursive_factorial(nb - 1);
	return (fact);
}

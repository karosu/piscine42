/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 11:50:11 by cosorio           #+#    #+#             */
/*   Updated: 2017/08/14 12:09:18 by cosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int word;

	word = 0;
	while (str[word] != '\0')
	{
		ft_putchar(str[word]);
		word++;
	}
}

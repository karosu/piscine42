/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 22:57:22 by cosorio           #+#    #+#             */
/*   Updated: 2017/08/16 23:09:19 by cosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 0)
	{
		ft_putstr(argv[0]);
		ft_putchar('\n');
	}
	else
	{
		ft_putstr(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}

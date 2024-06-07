/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raouf YC <yahia19raouf@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 08:48:38 by Raouf             #+#    #+#             */
/*   Updated: 2024/06/05 08:48:38 by Raouf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	my_variable(char cent, char dix, char uni)
{
	if (uni != dix && uni != cent && dix != cent)
	{
		write(1, &cent, 1);
		write(1, &dix, 1);
		write(1, &uni, 1);
		write(1, ", ", 1);
	}
}

void	ft_print_comb(void)
{
	char	uni;
	char	dix;
	char	cent;

	uni = '0';
	dix = '0';
	cent = '0';
	while (cent <= 57)
	{
		while (dix <= 57)
		{
			while (uni <= 57)
			{
				my_variable(cent, dix, uni);
				uni++;
			}
			dix++;
			uni = dix;
		}
		cent++;
		dix = cent;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

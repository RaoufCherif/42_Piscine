/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raouf YC <yahia19raouf@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 08:48:38 by Raouf             #+#    #+#             */
/*   Updated: 2024/06/06 08:48:38 by Raouf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar (char mille, char cent, char dix, char uni)
{
	if (dix != uni &&  mille + cent )
	{
		write(1, &mille, 1);
		write(1, &cent, 1);
		write(1," " , 1);
		write(1, &dix, 1);
		write(1, &uni, 1);
		write(1,"," , 1);
	}
}
void	ft_print_comb2()
{
	char	uni;
	char	dix;
	char	cent;
	char	mille;
	uni = 48;
	dix = 48;
	cent = 48;
	mille = 48;
	while (mille < 58)
	{
		while (cent < 58)
		{
			while (dix < 58)
			{
        			while (uni < 58)
				{
				ft_putchar(mille, cent,dix, uni);
				uni++;
				}
			uni = 48;
			dix++;
			}
		dix = 48;
		cent++;
		}
	cent = 48;
	mille++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

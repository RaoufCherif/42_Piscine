/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c ex07                                    :+      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YC Raouf <raouf19raouf@gmail.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:21:42 by cmassol           #+#    #+#             */
/*   Updated: 2024/03/30 21:55:40 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

int	main(void)
{
	ft_putnbr(25123);
	ft_putnbr(-8);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raouf YC <yahia19raouf@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:48:38 by Raouf           #+#    #+#             */
/*   Updated: 2024/06/04 08:48:38 by Raouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar('T');
	ft_putchar('e');
	ft_putchar('s');
	ft_putchar('T');
	ft_putchar('\n');
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raouf YC <yahia19raouf@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 08:48:38 by Raouf             #+#    #+#             */
/*   Updated: 2024/06/06 08:48:38 by Raouf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}

int	main(void)

{
	ft_print_reverse_alphabet();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Raouf YC <yahia19raouf@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 08:48:38 by Raouf             #+#    #+#             */
/*   Updated: 2024/06/05 08:48:38 by Raouf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_numbers(void)
{
	int	num;

	num = 48;
	while (num != 58)
	{
		write(1, &num, 1);
		num++;
	}
}

int	main(void)

{
	ft_print_numbers();
	return (0);
}

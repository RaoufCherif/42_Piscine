/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c ex00                                        :+      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YC Raouf <raouf19raouf@gmail.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:21:42 by cmassol           #+#    #+#             */
/*   Updated: 2024/03/30 21:55:40 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	a;

	a = 1;
	printf (" %i\n ", a);
	printf (" %p\n ", &a);
	ft_ft (&a);
	printf ("%i\n", a);
	printf ("%p\n", &a);
	return (0);
}

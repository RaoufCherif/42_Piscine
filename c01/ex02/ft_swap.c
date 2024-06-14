/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c ex02                                        :+      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YC Raouf <raouf19raouf@gmail.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:21:42 by cmassol           #+#    #+#             */
/*   Updated: 2024/03/30 21:55:40 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	nbr;
	int	chif;

	nbr = 5;
	chif = 10;
	printf("Je suis nbr %i\n", nbr);
	printf("je suis chif %i\n", chif);
	ft_swap(&nbr, &chif);
	printf("Je suis nbr %i\n", nbr);
	printf("Je suis chif %i\n", chif);
	return (0);
}

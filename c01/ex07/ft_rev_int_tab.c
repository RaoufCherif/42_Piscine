/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c ex07                               :+      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YC Raouf <raouf19raouf@gmail.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:21:42 by Raouf             #+#    #+#             */
/*   Updated: 2024/03/30 21:55:40 by Raouf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>  // Pour la fonction write
#include <stdio.h>  // Pour la fonction write

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	ft_putchar('[');
	while (i < size)
	{
		if (i)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_putchar(tab[i] + '0');
		i++;
	}
	ft_putchar(']');
}

int	main(void)
{
	int	tab[];

	tab = {8, 5, 7, 3, 4, 9};
	ft_print_int_tab(tab, 6);
	ft_putchar('\n');
	ft_rev_int_tab(tab, 6);
	ft_print_int_tab(tab, 6);
	return (0);
}

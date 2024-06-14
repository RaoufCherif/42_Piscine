/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c ex01                                        :+      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YC Raouf <raouf19raouf@gmail.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:21:42 by cmassol           #+#    #+#             */
/*   Updated: 2024/03/30 21:55:40 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	a;
	void	*ptr[9];
	:w

	a = 1;
	ptr[0] = &a;
	for (int i = 1; i <= 9; i + 1)
	{
		ptr[i] = &ptr[i - 1]
	}
		printf("%i\n", a);
		ft_ultimate_ft(ptr[8]);
		printf("%i\n", a);
	return (0);
}
/*
int     main(void)
 {
         int     a;
         a = 1;  
         int     *p1 = &a;
         int     **p2 = &p1;
         int     ***p3 = &p2;
         int     ****p4 = &p3;
         int     *****p5 = &p4;
         int     ******p6 = &p5;
         int     *******p7 = &p6;
         int     ********p8 = &p7;
         int     *********p9 = &p8;
  
         printf("%i\n", a);
         ft_ultimate_ft(p9);
         printf("%i\n", a);
         return (0);
 }
 */

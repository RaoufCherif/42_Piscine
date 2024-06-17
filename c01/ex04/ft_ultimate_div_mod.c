/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c ex04                          :+      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YC Raouf <raouf19raouf@gmail.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:21:42 by cmassol           #+#    #+#             */
/*   Updated: 2024/03/30 21:55:40 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	div;
	int	mod;	
	
	div  = *a / *b;	
	mod = *a % *b;
	*a = div;
	*b = mod;
	


}
int	main(void)
{	
	int	a;
	int	b;

 	a = 10;
	b = 2;	
	printf("a=%i\nb=%i\n ", a,b);
      ft_ultimate_div_mod(&a,&b); 
	printf("a/b=%i\na%%b=%i\n ", a,b);
	//ft_ultimate_div_mod();
	
	return (0);
}


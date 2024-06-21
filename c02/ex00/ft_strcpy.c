/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c ex00                                    :+      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YC Raouf <raouf19raouf@gmail.com           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:21:42 by Raouf             #+#    #+#             */
/*   Updated: 2024/06/21 21:55:40 by Raouf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != ('\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	dest[0];
	char	*src;

	src = "bonjour";
	printf("src : %s\n", src);
	ft_putchar('b');
	ft_putchar('\n');
	printf ("dest: %s\n", ft_strcpy(dest, src));
	return (0);
}


void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 12;
	printf("a=%i\nb=%i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a/b=%i\na%%b=%i\n", a, b);
	return (0);
}

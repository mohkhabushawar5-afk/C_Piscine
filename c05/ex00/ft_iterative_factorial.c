
#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (--nb)
	{
		result = result * nb;
	}
	return (result);
}
int main()
{
printf("%d\n", ft_iterative_factorial(5));
}

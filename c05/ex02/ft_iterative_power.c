
#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (--power)
		result *= nb;
	return (result);
}
int main()
{
printf("%d\n", ft_iterative_power(-2,3));
}

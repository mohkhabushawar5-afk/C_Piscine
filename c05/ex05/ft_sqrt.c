
#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= 46340 && (i * i) <= nb)
	{
		if ((nb / i) == i && (nb % i) == 0)
			return (i);
		i++;
	}
	return (0);
}
int main()
{
printf("%d\n", ft_sqrt(2147395600));
}

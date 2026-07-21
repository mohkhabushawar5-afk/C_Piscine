
#include <stdio.h>
int	ft_find_next_prime(int nb)
{
        int     i;
	int	j;

        if (nb <= 1)
                return (2);
	while (nb <= 2147483647)
	{
		i = 2;
		j = 1;
        	while (i <= 46340  && (i * i) <= nb)
        	{
                	if (nb % i == 0)
			{
                        	j = 0;
				break ;
			}
                	i++;
        	}
		if (j == 0)
			nb++;
		else
			return (nb);
	}
}
int main()
{
printf("%d\n", ft_find_next_prime(14));
}


#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	write (1, &"0123456789"[n % 10], 1);
}

int	ft_atoi(char *str)
{
	int i = 1;
	int s = 0;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str  == '-')
	{
		i *= -1;
	}
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		s = s * 10 + *str - '0';
		str++;
	}
	return (s * i);
}

int	main(int ac, char **av)
{
	int i;
	int nb;

	i= 1;
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(nb);
			write (1, " = ", 3);
			ft_putnbr(nb * i);
			if (i < 9)
				write (1, "\n", 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

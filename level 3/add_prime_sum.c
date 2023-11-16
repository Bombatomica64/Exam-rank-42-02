/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:13:11 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/16 11:51:40 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int ft_atoi(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while(str[i])
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr);
}
static int prev_prime(int nbr)
{
	int		n;
	int		i;

	n = nbr;
	while (n > 1)
	{
		i = 2;
		while (i * i <= n)
		{
			if (n % i == 0)
				break ;
			i++;
		}
		if (i == n)
			return (n);
		n--;
	}
	return (1);
}
static void ft_putnbr(long long nbr)
{
	char c;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int main (int args, char **argv)
{
	int				nbr;
	long long int	sum;

	sum = 0;
	if (args != 2 || argv[1][0] == '-')
	{
		write(1, "0\n", 2);
		return (0);
	}
	nbr = ft_atoi(argv[1]);
	while (nbr > 1)
	{
		nbr = prev_prime(nbr);
		sum += nbr;
	}
	ft_putnbr(sum);
	return (0);
}


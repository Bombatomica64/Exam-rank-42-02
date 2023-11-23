/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:15:34 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/23 17:10:03 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_power(int nb, int power)
{
	int i = 0;
	int res = 1;

	if(power == 0)
		return (1);
	while(i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

int ft_strlen(const char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}
char ft_tolower(char c)
{
    if(c >= 'A' && c <= 'Z')
        c += 32;
    return c;
}
int place_in_base(char c)
{
	int i = 0;
	char base[] = "0123456789abcdef";
	char base2[] = "0123456789ABCDEF";

	while(base[i])
	{
		if(base[i] == c)
			return (i);
		i++;
	}
	i = 0;
	while(base2[i])
	{
		if(base2[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
int	ft_atoi_base(const char *str, int str_base)
{
	long long num = 0;
//	int num_len = ft_strlen(str);
	int i = 0;
	int sign = 1;
	while(str[i])
	{
		if(place_in_base(str[i]) == -1)
			return (0);
	}
	if(str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i])
	{
		num = num * str_base + (place_in_base(str[i]));
		i++;
	}
	if (num > 2147483647 || num < -2147483648)
		return (0);
	return (num * sign);
}


int main(void) {
	const char *str = "-35AF12c";
	int result = ft_atoi_base(str, 16);
	
	printf("The result is: %d\n", result);
	
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:32:10 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/15 18:41:07 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
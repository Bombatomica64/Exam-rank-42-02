/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:57:40 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/20 10:04:39 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
static void ft_putnbr_recursive(int i)
{
	if (i >= 10)
	{
		ft_putnbr_recursive(i / 10);
		ft_putnbr_recursive(i % 10);
	}
	else
	{
		char c = i + '0';
		write(1, &c, 1);
	}
}
int main(int args, char **argv)
{
	if (args <= 1)
	{
		write(1,"0\n", 2);
		return (0);
	}
	int i = 0;
	while (argv[i])
		i++;
	ft_putnbr_recursive(i - 1);
	write(1,"\n",1);
	return (0);
}
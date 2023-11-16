/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:04:49 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/16 15:32:52 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int main(int args, char **argv)
{
	int		i;
	
	if (args != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
		{
			write(1, " ", 1);
			while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
				i++;
		}
		else
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
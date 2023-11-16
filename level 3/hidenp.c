/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:31:27 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/16 16:41:57 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int args, char **argv)
{
	int		i;
	int		j;

	if (args != 3)
	{
		write(1,"\n", 1);
		return (0);
	}
	if (argv[1][0] == '\0')
	{
		write (1, "1\n", 2);
		return (0);
	}
	i = 0;
	j = 0;
	while (argv[2][i])
	{
		if (argv[1][j] == argv[2][i])
		{
			j++;
			if (argv[1][j] == '\0')
			{
				write(1, "1\n", 2);
				return (0);
			}
		}
		i++;
	}
	write(1, "0\n", 2);
	return (0);
}
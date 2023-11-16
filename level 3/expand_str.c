/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:41:58 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/16 16:10:38 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int args, char **argv)
{
	int		i;

	i = 0;
	if (args != 2)
	{
		write(1,"\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		if (argv[1][i] == 9 || argv[1][i] == 32)
		{
			write (1, "   ", 3);
			while (argv[1][i] == 9 || argv[1][i] == 32)
				i++;
		}
		else
		{
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
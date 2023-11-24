/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:12:58 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/24 11:06:00 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_switchlower(int c)
{
	return (219 - c);
}
static int	ft_switchUPPER(int c)
{
	return(155 - c);
}

int main (int args, char **argc)
{
	int i;

	i = 0;
	if (args != 2)
		return (0);
	while (argc[1][i])
	{
		if (argc[1][i] <= 'z' && argc[1][i] >= 'a')
			argc[1][i] = ft_switchlower(argc[1][i]);
		else if (argc[1][i] <= 'Z' && argc[1][i] >= 'A')
			argc[1][i] = ft_switchUPPER(argc[1][i]);
		write(1, &argc[1][i], 1);
		i++;
	}
	
}

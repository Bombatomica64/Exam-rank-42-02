/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:12:58 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/15 17:07:06 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_switchlower(int c)
{
	if(c <= 110)
		return (c + 13);
	else
		return (c - 13);
}
static int	ft_switchUPPER(int c)
{
	if(c <= 78)
		return (c + 13);
	else
		return (c - 13);
}

int main (int args, char **argc)
{
	int i;

	i = 0;
	if (argc != 2)
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

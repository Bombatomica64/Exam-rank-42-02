/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:24:06 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/16 16:27:23 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *tab;
	int i;

	i = 0;
	if (start > end)
		tab = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		tab = (int *)malloc(sizeof(int) * (end - start) + 1);
	while (start != end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	return (tab);
}
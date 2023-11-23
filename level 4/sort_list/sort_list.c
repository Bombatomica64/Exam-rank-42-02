/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:22:23 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/23 17:44:01 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_list.list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*temp;
	t_list	*swap;
	t_list	*start = lst;
	t_list	*begin = lst;
	int		data;
	int	sorted = 0;

	while(sorted == 0)
	{
		start = begin;
		lst = start;
		while(start)
		{
			if (cmp(start->data,start->next->data) == 0)
			{
				sorted = 0;
				break;
			}
			sorted = 1;
			start = start->next;
		}
		while(lst && sorted == 0)
		{
			temp = lst->next;
			if (cmp(lst->data, temp->data) == 0)
			{
				swap = lst->data;
				lst->data = temp->data;
				temp->data = swap;
			}
			lst = lst->next;
		}
	}
	return (begin);
}
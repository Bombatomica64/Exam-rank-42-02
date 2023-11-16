/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:31:35 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/16 18:41:56 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int is_sorted(int *tab, unsigned int size)
{
	unsigned int i = 0;

	while (i < size)
	{
		if(tab[i] > tab[i + 1] && tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int 	i;
	int				swap;
	int				check = 0;

	while(check == 0)
	{
		check = is_sorted(tab, size);
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1] && i + 1 < size)
			{
				swap = tab[i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap; 
			}
			i++;
		}
	}
	printf("%ls", tab);
}
int main()
{
	int arr[] = {5, 2, 1, 4, 3};
	unsigned int size = sizeof(arr) / sizeof(arr[0]);

	sort_int_tab(arr, size);

	for (unsigned int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
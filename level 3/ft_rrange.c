/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:31:14 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/24 10:32:30 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int step = 1;
	int n = end - start;

	if (n < 0)
		(n *= -1);
	n++;

	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		if (start < end)
			step = -1;
		while (i < n)
		{
			range[i] = end;
			end = end + step;
			i++;
		}
	}
	return (range);
}
#include <stdio.h>

int *ft_rrange(int start, int end);

int main(void)
{
	int start = 0;
	int end = 2147483640;
	int *result = ft_rrange(start, end);

	if (result)
	{
		printf("Range: ");
		for (int i = 0; i <= end - start; i++)
		{
			printf("%d ", result[i]);
		}
		printf("\n");

		free(result);
	}

	return 0;
}

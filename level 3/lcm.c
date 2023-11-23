/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:04:42 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/23 10:23:01 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_min(unsigned int a, unsigned int b)
{
		return ((a < b) ? a : b);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	min = ft_min(a,b);
	unsigned int	HCF = 1;
	unsigned int	i = 1;
	unsigned int	LCM = 0;

	if (a == 0 || b == 0)
		return (0);
	while (i < min)
	{
		if (a % i == 0 && b % i == 0)
			HCF = i;
		i++;
	}
	LCM = (a * b) / HCF;
	return (LCM);
}
#include <stdio.h>

// Function declaration
unsigned int lcm(unsigned int a, unsigned int b);

int main() {
	// Test cases
	unsigned int a = 12;
	unsigned int b = 18;
	unsigned int result = lcm(a, b);

	// Print the result
	printf("LCM of %u and %u is %u\n", a, b, result);

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:47:07 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/23 12:25:13 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
	write (1,"\n", 1);
} */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char b = octet >> 4;
	unsigned char c = octet << 4;
	unsigned char d;

	/* write (1, "b:",3);
	print_bits(b);
	write (1, "c:",3);
	print_bits(c); */
	d = b | c;
	return (d);
}
/* int main (void)
{
	unsigned char c = 90;
	print_bits(c);
	c = swap_bits(c);
	print_bits(c);
	
} */
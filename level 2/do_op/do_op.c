/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:15:40 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/15 18:27:51 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h" 

int	main (int args, char **argv)
{
	int		nbr1;
	int		nbr2;
	char	op;
	
	if (args != 4)
		return (0);
	nbr1 = atoi(argv[1]);
	nbr2 = atoi(argv[3]);
	op = argv[2][0];
	if (op == '+')
		printf("%d", nbr1 + nbr2);
	else if (op == '-')
		printf("%d", nbr1 - nbr2);
	else if (op == '*')
		printf("%d", nbr1 * nbr2);
	else if (op == '/')
		printf("%d", nbr1 / nbr2);
	else if (op == '%')
		printf("%d", nbr1 % nbr2);
	return (0);
		
}
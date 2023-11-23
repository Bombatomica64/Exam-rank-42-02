/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:24:52 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/23 16:11:30 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}
//bho
//return ((condizione) se si ? se no);
int is_in_str(char c, char *str)
{
	int i = 0;
	
	while(str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}


int	main(int args, char **argv)
{
	if (args !=  3)
	{
		write(1, "\n", 1);
		return (0);
	}
	// int len1 = ft_strlen(argv[1]);
	// int len2 = ft_strlen(argv[2]);
	int i = 0;
	int j = 0;
	while(argv[1][i])
	{
		if(is_in_str(argv[1][i],&argv[2][j]) == 1)
		{
			while(argv[1][i] != argv[2][j])
				j++;	
			j++;
			i++;
		}
		else
		{
			write(1,"\n",1);
			return (0);
		}	
	}
	write(1, argv[1], ft_strlen(argv[1]));
	return (0);
}
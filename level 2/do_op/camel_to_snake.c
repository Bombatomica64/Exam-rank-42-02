/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:13:37 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/15 18:07:49 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	main(int args, char **argv)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(argv[1]);
	if (args != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			len++;
		i++;
	}
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	while(argv[1][i])
	{
		if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			str[i + j] = '_';
			j++;
			str[i + j] = argv[1][i] + 32;
		}
		else
			str[i + j] = argv[1][i];
		i++;
	}
	str[i + j] = '\0';
	write(1, str, len);
}
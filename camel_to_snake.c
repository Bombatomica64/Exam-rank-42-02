/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:13:37 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/15 17:27:03 by lmicheli         ###   ########.fr       */
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
	int	i;
	int	len;
	char *str;

	i = 0;
	len = ft_strlen(argv[1]);
	if (args != 2)
		return (0);
	str = (char *)malloc(sizeof(char) * (len + 1));
	while(argv[1][i])
	{
		if(argv[1][i] == ' ')
			str[i] = '_';
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			str[i] = argv[1][i] + 32;
		else
			str[i] = argv[1][i];
		i++;
	}
	str[i] = '\0';
	write(1, str, len);
}
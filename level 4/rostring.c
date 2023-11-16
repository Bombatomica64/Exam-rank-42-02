/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:26:48 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/16 18:25:58 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
static int ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main (int args, char ** argv)
{
	int		i;
	int		len;
	int		j = 0;
	int 	space;
	int		word_len;
	char 	*roto_string;

	if (args != 2 || argv[1] == NULL)
	{
		write (1, "\n", 1);
		return (0);
	}
	i = 0;
	space = 0;
	len = ft_strlen(argv[1]);
	roto_string = (char *)malloc((len + 2) * sizeof(char));
	 while (argv[1][space] && ft_isblank(argv[1][space]))
		space++;
	 word_len = 0;
	 i = space;
	 while (argv[1][i] && !ft_isblank(argv[1][i]))
	 {
		word_len++;
	 	i++;
	 }
	i = 0;
	while (argv[1][i + word_len])
	{
		roto_string[i] = argv[1][i + word_len];
		i++;
	}
	roto_string[i] = ' ';
	i++;
	 while (j <= word_len)
    {
        roto_string[i++] = argv[1][j + space];
		j++;
    }
	roto_string[i] = '\0';
	write (1, roto_string, len + 1);
	write (1, "\n", 1);
	free(roto_string);	
	return (0);
}
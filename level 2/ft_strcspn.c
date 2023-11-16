/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:53:05 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/16 10:23:54 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int compare_char_to_str(char c, char *s)
{
	int		i;
	
	i = 0;
	while(s[i])
	{
		if (c == s[i])
			return (1);
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if(compare_char_to_str(s[i],reject) == 0)
			i++;
		else
			break;
	}
	return (i * sizeof(char));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:47:35 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/16 11:01:14 by lmicheli         ###   ########.fr       */
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
		i++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if(compare_char_to_str(s1[i],(char *)s2) == 0)
			i++;
		else
			return ((char *)&s1[i]);
	}
	return (NULL);
}
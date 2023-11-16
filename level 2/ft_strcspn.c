/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:53:05 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/16 10:39:30 by lmicheli         ###   ########.fr       */
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

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if(compare_char_to_str(s[i],(char *)reject) == 0)
			i++;
		else
			break;
	}
	return (i * sizeof(char));
}
/* #include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject);

int main(void)
{
	char str1[] = "Hello, world!";
	char str2[] = "aeiou";
	size_t result = ft_strcspn(str1, str2);
	printf("The length of the initial segment of str1 that does not contain any character from str2 is: %zu\n", result);
	return 0;
} */

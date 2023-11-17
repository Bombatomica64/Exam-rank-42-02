/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmicheli <lmicheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:47:22 by lmicheli          #+#    #+#             */
/*   Updated: 2023/11/17 12:16:42 by lmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
/*
static int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

static int ft_count_words(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (str[i] && str[i] != ' ' && str[i] != '\t')
			count++;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
	}
	return (count);
}
static int ft_len_next_word(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			count++;
		return (count);
	}
	return (count);
}
static char *make_str_word(char *str)
{
	int i = 0;
	int j = 0;
	char *word;
	int len = ft_len_next_word(str);

	word = (char *)malloc((len + 1) * sizeof(char));
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while(j < len)
	{
		word[j] = str[i - len + j];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}
static int ft_go_to_next_word(int j,char *str)
{
	if (str[j] && (str[j] == ' ' || str[j] == '\t'))
		j++;
	while (str[j] && str[j] != ' ' && str[j] != '\t')
		j++;
	if(str[j] == ' ' || str[j] == '\t')
		j++;
	return (j);
	
}

int main(int args, char **argv)
{
	int		i;
	int 	j;
	int		num_words;
	char	**words;
	
	if (args != 2)
	{
		write (1 , "\n", 1);
		return (0);
	}
	i = 0;
	j = 0;
	num_words = ft_count_words(argv[1]);
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	while (i < num_words)
	{
		words[i] = make_str_word(argv[1]);
		argv[1] = &argv[1][j];
		j = ft_go_to_next_word(j, &argv[1][j]);
		i++;
	}
	words[i] = NULL;
	i--;
	while (i >= 0)
	{
		write(1, words[i], ft_strlen(words[i]));
		if (i > 0)
			write(1, " ", 1);
		i--;
	}
	write(1, "\n", 1);
	// Free allocated memory for each word
	i = 0;
	while (i < num_words)
	{
    	free(words[i]);
    	i++;
	}
	free(words);
	return (0);
} */
int main (int args, char **argv)
{
	int i = 0;
	int flag = 0;
	int start;
	int end;

	if (args != 2)
	{
		write (1 , "\n", 1);
		return (0);
	}
	while (argv[1][i])
		i++;
	while (i >= 0)
	{
		while( argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		end = i;
		while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		start = i + 1;
		flag = start;
		while (start <= end)
		{
			write (1, &argv[1][start], 1);
			start++;
		}
		if (flag != 0)
			write (1, " ", 1);		
	}
	write (1, "\n", 1);
	return (0);
}
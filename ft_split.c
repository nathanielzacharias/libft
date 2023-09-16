/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzachari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 21:30:41 by nzachari          #+#    #+#             */
/*   Updated: 2023/09/16 21:31:29 by nzachari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s == c)
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int	word_length(char const *s, char c)
{
	int	len = 0;

	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	wcount;
	size_t	i;
	size_t	j;
	size_t	len;
	char	**result;

	wcount = count_words(s, c);
	result = (char **)malloc((wcount + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < wcount)
	{
		while (*s && *s == c)
			s++;
		len = word_length(s, c);
		result[i] = (char *)malloc((len + 1) * sizeof(char));
		if (!result[i])
		{
			while (i > 0)
				free (result[--i]);
			free (result);
			return (NULL);
		}
		j = 0;
		while (j < len)
		{
			result[i][j] = *s++;
			j++;
		}
		result[i][len] = '\0';
		i++;
	}
	result[wcount] = NULL;
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzachari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:40:03 by nzachari          #+#    #+#             */
/*   Updated: 2023/09/08 16:50:51 by nzachari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

char	*strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (--len >= 0)
	{
		if (s[len] == c)
			return (s);
	}
	return (NULL);
}

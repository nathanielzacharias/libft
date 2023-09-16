/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzachari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:57:30 by nzachari          #+#    #+#             */
/*   Updated: 2023/09/12 17:25:53 by nzachari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*returnstr;
	size_t	i;

	returnstr = (char *)malloc((len + 1) * sizeof(char));
	if (!returnstr)
		return (NULL);
	i = 0;
	while	(i < len)
	{
		returnstr[i] = s[start + i];
		i++;
	}
	returnstr[i] = '\0';
	return (returnstr);
}

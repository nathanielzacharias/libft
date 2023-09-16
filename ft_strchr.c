/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzachari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:33:08 by nzachari          #+#    #+#             */
/*   Updated: 2023/09/08 16:39:21 by nzachari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*copy;

	copy = s; 
	while (*copy)
	{
		if (*copy == c)
			return ((char *)copy);
		else
			copy++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main (void)
{
	char *s = "where?";
	char c = 'r';

	printf("%s\n", ft_strchr(s, c) );
}
*/

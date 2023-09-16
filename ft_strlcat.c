/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzachari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:41:24 by nzachari          #+#    #+#             */
/*   Updated: 2023/09/08 13:30:35 by nzachari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*oridst;
	char	*orisrc;

	i = 0;
	j = 0;
	oridst = dst;
	orisrc = (char *)src;
	while (*dst)
		i++;
	i += 1;
	while (i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i + 1] = '\0';
	return (ft_strlen(oridst) + ft_strlen(orisrc));
}

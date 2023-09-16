/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzachari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:13:22 by nzachari          #+#    #+#             */
/*   Updated: 2023/09/08 10:16:09 by nzachari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (s < d)
	{
		s += n + 1;
		d += n + 1;
		while (n-- > 0)
			*(d--) = *(s--);
	}
	else
	{
		while (n-- > 0)
			*(d++) = *(s++);
	}
	return (dest);
}

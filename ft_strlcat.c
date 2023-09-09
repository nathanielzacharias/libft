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

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

size_t	strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	char	*oridst;
	char	*orisrc;

	i = 0;
	j = 0;
	oridst = dst;
	orisrc = src;
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
	return (strlen(oridst) + strlen(orisrc));
}

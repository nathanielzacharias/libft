/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzachari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:31:56 by nzachari          #+#    #+#             */
/*   Updated: 2023/09/06 12:26:45 by nzachari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		++len;
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	char *str = "wjere?";
	printf("str should be 6 is actually: %i \n", ft_strlen(str));
}
*/

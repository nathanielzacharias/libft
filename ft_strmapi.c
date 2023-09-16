/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzachari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:49:47 by nzachari          #+#    #+#             */
/*   Updated: 2023/09/17 02:49:50 by nzachari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (!s || !f)
        return NULL;

    unsigned int len = 0;
    while (s[len] != '\0')
        len++;

    char *result = (char *)malloc((len + 1) * sizeof(char));
    if (!result)
        return NULL;

    for (unsigned int i = 0; i < len; i++)
        result[i] = f(i, s[i]);

    result[len] = '\0';

    return result;
}

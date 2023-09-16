/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzachari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:31:26 by nzachari          #+#    #+#             */
/*   Updated: 2023/09/17 02:31:29 by nzachari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int num_len(int n)
{
    int len = 1;
    if (n < 0)
    {
        len++;
        n = -n;
    }
    while (n >= 10)
    {
        len++;
        n /= 10;
    }
    return len;
}

char *ft_itoa(int n)
{
    if (n == INT_MIN)
        return "-2147483648";

    int len = num_len(n);
    char *str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return NULL;

    int is_negative = 0;
    if (n < 0)
    {
        is_negative = 1;
        n = -n;
    }

    str[len--] = '\0';

    while (len >= 0)
    {
        str[len] = (char)((n % 10) + '0');
        n /= 10;
        len--;
    }

    if (is_negative)
        str[0] = '-';

    return str;
}

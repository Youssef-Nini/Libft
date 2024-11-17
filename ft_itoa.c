/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynini <ynini@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:26:45 by ynini             #+#    #+#             */
/*   Updated: 2024/11/04 17:59:20 by ynini            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*num;

	nb = n;
	len = ft_numlen(nb);
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	if (nb < 0)
	{
		num[0] = '-';
		nb = -nb;
	}
	num[len] = '\0';
	while (nb > 0)
	{
		num[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n == 0)
		num[0] = '0';
	return (num);
}

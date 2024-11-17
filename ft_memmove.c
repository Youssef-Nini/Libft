/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynini <ynini@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:25:49 by ynini             #+#    #+#             */
/*   Updated: 2024/11/13 13:16:01 by ynini            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	if (dst > src && (dst < src + len))
	{
		while (len--)
			to[len] = from[len];
	}
	else
	{
		i = 0;
		while (len--)
		{
			to[i] = from[i];
			i++;
		}
	}
	return (dst);
}

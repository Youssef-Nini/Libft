/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynini <ynini@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:14:08 by ynini             #+#    #+#             */
/*   Updated: 2024/11/12 20:53:09 by ynini            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	while (n--)
		*to++ = *from++ ;
	return (dst);
}

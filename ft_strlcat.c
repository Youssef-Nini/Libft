/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynini <ynini@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:03:59 by ynini             #+#    #+#             */
/*   Updated: 2024/11/12 20:54:07 by ynini            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	count;

	lensrc = ft_strlen(src);
	if (dstsize == 0)
		return (lensrc);
	lendst = ft_strlen(dst);
	if (dstsize <= lendst)
		return (dstsize + lensrc);
	count = 0;
	while (lendst + count < dstsize - 1 && src[count])
	{
		dst[lendst + count] = src[count];
		count++;
	}
	dst[lendst + count] = '\0';
	return (lendst + lensrc);
}

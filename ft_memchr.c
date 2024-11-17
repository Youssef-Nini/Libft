/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynini <ynini@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:02:32 by ynini             #+#    #+#             */
/*   Updated: 2024/10/27 20:30:34 by ynini            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;
	unsigned char	ch;

	arr = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*arr == ch)
			return (arr);
		arr++;
		n--;
	}
	return (NULL);
}

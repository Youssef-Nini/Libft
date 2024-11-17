/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynini <ynini@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:58:36 by ynini             #+#    #+#             */
/*   Updated: 2024/11/11 10:10:29 by ynini            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*arr;

	arr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		arr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

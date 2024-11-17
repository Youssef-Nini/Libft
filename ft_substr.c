/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynini <ynini@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 07:51:33 by ynini             #+#    #+#             */
/*   Updated: 2024/11/10 14:09:45 by ynini            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	lenght;
	size_t	i;

	if (!s)
		return (NULL);
	lenght = ft_strlen(s);
	if (start >= lenght)
		return (ft_strdup(""));
	if (len > lenght - start)
		len = lenght - start;
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}

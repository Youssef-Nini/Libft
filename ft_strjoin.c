/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynini <ynini@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:44:24 by ynini             #+#    #+#             */
/*   Updated: 2024/11/12 14:46:33 by ynini            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	s1len;
	size_t	s2len;

	if (!s1 && !s2)
		return (NULL);
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (s2 && !s1)
		return (ft_strdup(s2));
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	join = (char *)malloc(s1len + s2len + 1);
	if (join == NULL)
		return (NULL);
	ft_strlcpy(join, s1, s1len + 1);
	ft_strlcat(join, s2, s1len + s2len + 1);
	return (join);
}

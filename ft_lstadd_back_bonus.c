/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynini <ynini@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:34:57 by ynini             #+#    #+#             */
/*   Updated: 2024/11/08 17:13:08 by ynini            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*last;

	if (!list || !new)
		return ;
	if (*list == NULL)
		*list = new;
	else
	{
		last = ft_lstlast(*list);
		last->next = new;
	}
}

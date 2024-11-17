/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynini <ynini@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:34:34 by ynini             #+#    #+#             */
/*   Updated: 2024/11/09 17:32:48 by ynini            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void*))
{
	t_list	*next_node;

	if (!list || !*list || !del)
		return ;
	while (*list)
	{
		next_node = (*list)->next;
		ft_lstdelone(*list, del);
		*list = next_node;
	}
}

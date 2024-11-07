/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:56:11 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/02 17:16:16 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*tmp;

	if (!lst)
		return ;
	current = (*lst);
	while (current)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		free(tmp);
	}
	(*lst) = NULL;
}

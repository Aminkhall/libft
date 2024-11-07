/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:59:33 by mkhallou          #+#    #+#             */
/*   Updated: 2024/10/30 20:01:55 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;
	int		i;	

	tmp = (char *) s;
	i = 0;
	while (tmp[i])
	{
		if (tmp[i] == (char)c)
			return (tmp + i);
		i++;
	}
	if (tmp[i] == (char)c)
		return (tmp + i);
	return (NULL);
}

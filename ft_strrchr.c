/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:21:19 by mkhallou          #+#    #+#             */
/*   Updated: 2024/10/30 19:29:55 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		i;

	tmp = (char *) s;
	i = ft_strlen(tmp);
	while (i)
	{
		if (tmp[i] == (char)c)
			return (tmp + i);
		i--;
	}
	if (tmp[i] == (char)c)
		return (tmp);
	return (NULL);
}

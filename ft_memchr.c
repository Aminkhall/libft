/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:38:19 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/06 15:09:50 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*t;
	size_t			i;

	x = (unsigned char) c;
	t = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (t[i] == x)
			return ((void *)(t + i));
		i++;
	}
	return (NULL);
}

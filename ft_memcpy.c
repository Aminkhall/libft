/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:42:20 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/06 15:25:22 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*t;

	t = (unsigned char *) src;
	if (!t && !dst && n)
		return (NULL);
	i = 0;
	while (n > i)
	{
		((unsigned char *)dst)[i] = t[i];
		i++;
	}
	return (dst);
}

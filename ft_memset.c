/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:46:06 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/06 18:43:29 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	n;
	unsigned char	*s;

	n = (unsigned char) c;
	s = (unsigned char *) b;
	while (len--)
		*s++ = n;
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:27:06 by mkhallou          #+#    #+#             */
/*   Updated: 2024/10/30 19:45:56 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*arr;
	size_t	i;

	i = 0;
	if (count < 0 || size < 0)
		return (NULL);
	arr = (char *) malloc(size * count);
	if (!arr)
		return (NULL);
	while (i < (size * count))
	{
		arr[i] = 0;
		i++;
	}
	return ((void *) arr);
}

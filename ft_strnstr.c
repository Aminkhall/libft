/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:20:00 by mkhallou          #+#    #+#             */
/*   Updated: 2024/10/30 20:00:23 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*src;
	size_t		j;
	size_t		i;

	src = (char *) haystack;
	if (!*needle)
		return (src);
	i = 0;
	while (src[i] && len > i)
	{
		j = 0;
		while (needle[j] == src[i + j] && len > (i + j))
		{
			if (needle[j + 1] == '\0')
				return (src + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

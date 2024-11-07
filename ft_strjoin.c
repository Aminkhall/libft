/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:06:45 by mkhallou          #+#    #+#             */
/*   Updated: 2024/10/30 19:28:51 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_len;
	char	*new_str;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1 && s2)
		return (ft_strdup(s2));
	else if (s1 && !s2)
		return (ft_strdup(s1));
	total_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *) malloc(sizeof(char) * (total_len + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, (ft_strlen(s1) + 1));
	ft_strlcat(new_str, s2, total_len + 1);
	return (new_str);
}

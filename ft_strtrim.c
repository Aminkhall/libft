/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:22:36 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/06 17:13:24 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_start(char const *s, char const *set)
{
	int		i;
	char	*s1;

	s1 = (char *) s;
	while (*s1)
	{
		i = 0;
		while (set[i])
		{
			if (set[i] == *s1)
				break ;
			i++;
		}
		if (*s1 != set[i])
			break ;
		s1++;
	}
	return (s1);
}

static char	*ft_limit(char const *s, char const *set)
{
	char	*s1;
	size_t	len_s;
	size_t	i;

	s = ft_start(s, set);
	s1 = (char *) s;
	len_s = ft_strlen(s1);
	while (--len_s)
	{
		i = 0;
		while (set[i])
		{
			if (set[i] == s1[len_s])
				break ;
			i++;
		}
		if (s1[len_s] != set[i])
			break ;
	}
	s1 = ft_substr(s1, 0, len_s + 1);
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	if (!s1)
		return (NULL);
	if (!set || !*set || !*s1)
		return (ft_strdup(s1));
	str = ft_limit(s1, set);
	return (str);
}

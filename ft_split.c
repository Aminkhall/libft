/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:49:15 by mkhallou          #+#    #+#             */
/*   Updated: 2024/10/30 19:27:32 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_sep(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_count_word(char const *s, char c)
{
	int	count;
	int	in;

	count = 0;
	in = 0;
	if (!*s)
		return (0);
	if (s[0] != c)
		count++;
	while (*s)
	{
		if (*s == c)
			in = 1;
		else if (in)
		{
			count++;
			in = 0;
		}
		s++;
	}
	return (count);
}

static void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	int		count_word;
	char	**tab;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	count_word = ft_count_word(s, c);
	tab = (char **) malloc(sizeof(char *) * (count_word + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < count_word)
	{
		while (*s == c && *s)
			s++;
		len = ft_strlen_sep(s, c);
		tab[i] = (char *) malloc(sizeof(char) * (len + 1));
		if (!tab[i])
			return (ft_free(tab), NULL);
		ft_strlcpy(tab[i++], s, len + 1);
		s += len;
	}
	tab[count_word] = 0;
	return (tab);
}

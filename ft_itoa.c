/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:33:06 by mkhallou          #+#    #+#             */
/*   Updated: 2024/11/06 17:21:34 by mkhallou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_int(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len_int;
	char	*s;

	num = (long) n;
	len_int = ft_strlen_int(num);
	s = (char *) malloc(sizeof(char) * (len_int + 1));
	if (!s)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		s[0] = '-';
	}
	if (num == 0)
		s[0] = '0';
	s[len_int] = '\0';
	while (num)
	{
		s[len_int - 1] = (num % 10) + '0';
		len_int--;
		num /= 10;
	}
	return (s);
}

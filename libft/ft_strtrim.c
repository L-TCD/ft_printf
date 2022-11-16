/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:36:43 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/12 12:04:16 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (is_in_set(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while ((j - 1) > i && is_in_set(s1[(j - 1)], set))
		j--;
	str = malloc((j - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	k = 0;
	while ((i + k) < j)
	{
		str[k] = s1[k + i];
		k++;
	}
	str[k] = '\0';
	return (str);
}

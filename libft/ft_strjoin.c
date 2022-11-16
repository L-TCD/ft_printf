/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:36:08 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/12 13:00:57 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	if (s1 && s2)
	{
		i = 0;
		str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
		if (!str)
			return (NULL);
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i])
		{
			str[i + ft_strlen(s1)] = s2[i];
			i++;
		}
		str[i + ft_strlen(s1)] = '\0';
		return (str);
	}
	return (NULL);
}

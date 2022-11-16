/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:35:15 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/12 11:51:52 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			len_max;
	unsigned int	j;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		len_max = 0;
	else
		len_max = ft_strlen(&s[start]);
	j = 0;
	if (len < len_max)
		len_max = len;
	str = malloc((len_max + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (j < len_max)
	{
		str[j] = s[start + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:22:43 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/12 12:54:26 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	if ((!src || !dst) && size == 0)
		return (i);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst < size)
	{
		while (src[i] && (len_dst + i) < size - 1)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
		return (len_dst + len_src);
	}
	else
		return (len_src + size);
}

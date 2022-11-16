/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 04:51:33 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/12 08:26:22 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	size_t	i;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	if (dest > src)
		while (len-- > 0)
			((char *)dest)[len] = ((char *)src)[len];
	else
	{
		while (i < len)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

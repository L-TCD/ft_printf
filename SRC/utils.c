/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:10:24 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/21 11:50:23 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"

static size_t	find_num_len(unsigned long long num, char *base);

char	*itoa_base(unsigned long long num, char *base, int *ret_error)
{
	char		*str;
	size_t		num_len;
	size_t		base_len;

	num_len = find_num_len(num, base);
	base_len = ft_strlen(base);
	str = ft_calloc((num_len + 1), sizeof(char));
	if (!str)
	{
		*ret_error = -1;
		return (NULL);
	}
	while (num_len--)
	{
		str[num_len] = base[num % base_len];
		num = num / base_len;
	}
	return (str);
}

static size_t	find_num_len(unsigned long long num, char *base)
{
	size_t				len;
	unsigned long long	base_len;

	len = 1;
	base_len = ft_strlen(base);
	while (num >= base_len)
	{
		num = num / base_len;
		len ++;
	}
	return (len);
}

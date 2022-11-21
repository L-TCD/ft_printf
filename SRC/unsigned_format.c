/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:41:46 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/21 11:44:46 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"

size_t	unsigned_format(unsigned int ul, int *ret_error)
{
	char	*str;
	int		len;

	str = itoa_base(ul, "0123456789", ret_error);
	len = string_format(str);
	free(str);
	return (len);
}

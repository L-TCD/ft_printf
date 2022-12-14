/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper_hexa_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 07:07:26 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/18 09:44:45 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"

size_t	upper_hexa_format(unsigned int hexa, int *ret_error)
{
	char	*str;
	int		count;

	str = itoa_base(hexa, "0123456789ABCDEF", ret_error);
	count = string_format(str);
	free(str);
	return (count);
}

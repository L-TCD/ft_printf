/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:41:46 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/17 12:06:17 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"

int	unsigned_format(unsigned long ul)
{
	char	*str;
	int		len;

	str = itoa_base(ul, "0123456789");
	len = string_format(str);
	free(str);
	return (len);
}



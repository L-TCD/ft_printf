/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 07:58:33 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/17 08:41:02 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"

int	string_format(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

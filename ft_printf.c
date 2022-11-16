/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 06:00:56 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/16 06:39:22 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			i;

	i = 0;

	va_start(args, str);

	i = intput_parser(str, args);
	va_end(args);
	return (i);
}

int intput_parser(const char *str, va_list args)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while(str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			count++;
		}

		i++;
	}
	return (count);
}



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

int ft_printf(const char *str, ...)
{
	va_list args;
	int i;

	i = -1;
	va_start(args, str);
	i = intput_parser(str, args);
	va_end(args);
	return (i);
}

int intput_parser(const char *str, va_list args)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			count++;
		}
		else if (str[i] == '%' && str[i + 1])
		{
			count++;
			if (is_arg(str[i]))
			{
				count = count + insert_value(str[i], args);
			}
			else
			{
				ft_putchar_fd(str[i], 1);
				count++;
			}
		}
		i++;
	}
	return (count);
}

int is_arg(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int format_arg(char c, va_list args)
{
	int count;

	count = 0;
	if (c == 'c')
		count = char_format(args);
	else if (c == 's')
		count = string_format(args);
	else if (c == 'p')
		count = pointer_format(args);
	else if (c == 'd' || c == 'i')
		count = digit_format(args);
	else if (c == 'u')
		count = unsigned_format(args);
	else if (c == 'x')
		count = hexa_format(args);
	else if (c == 'X')
		count = upper_hexa_format(args);
	else if (c == '%')
		count = percent_format(args);
	return (count);
}

int char_format(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int string_format(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int pointer_format(void *ptr);
int digit_format(int digit);
int unsigned_format(unsigned long ul);
int hexa_format(unsigned long hexa);
int upper_hexa_format(unsigned long hexa);
int percent_format(char c);

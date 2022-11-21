/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 06:00:56 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/18 07:07:59 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"

static size_t	put_and_count_char(char c, int fd);
static size_t	format_arg(char c, va_list args);
static size_t	is_arg(char c);
static size_t	intput_parser(const char *str, va_list args);

size_t	ft_printf(const char *s, ...)
{
	va_list		args;
	const char	*str;
	size_t		count;

	count = 0;
	str = ft_strdup(s);
	if (!str)
		return (0);
	va_start(args, s);
	count = intput_parser(str, args);
	va_end(args);
	free((void *)str);
	return (count);
}

static size_t	intput_parser(const char *str, va_list args)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			count += put_and_count_char(str[i], 1);
		else if (str[i] == '%' && str[i + 1])
		{
			i++;
			if (is_arg(str[i]))
				count += format_arg(str[i], args);
			else
				count += put_and_count_char(str[i], 1);
		}
		i++;
	}
	return (count);
}

static size_t	is_arg(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%');
}

static size_t	format_arg(char c, va_list args)
{
	size_t	count;

	count = 0;
	if (c == 'c')
		count = char_format(va_arg(args, int));
	else if (c == 's')
		count = string_format(va_arg(args, char *));
	else if (c == 'p')
		count = pointer_format(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		count = digit_format(va_arg(args, int));
	else if (c == 'u')
		count = unsigned_format(va_arg(args, unsigned int));
	else if (c == 'x')
		count = hexa_format(va_arg(args, unsigned int));
	else if (c == 'X')
		count = upper_hexa_format(va_arg(args, unsigned int));
	else if (c == '%')
		count = percent_format();
	return (count);
}

static size_t	put_and_count_char(char c, int fd)
{
	ft_putchar_fd(c, fd);
	return (1);
}

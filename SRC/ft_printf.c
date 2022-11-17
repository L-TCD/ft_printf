/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 06:00:56 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/17 07:31:32 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list		args;
	const char	*str;
	int			i;

	i = 0;
	str = ft_strdup(s);
	if (!str)
		return (0);
	va_start(args, s);
	i = intput_parser(str, args);
	va_end(args);
	free(str);
	return (i);
}

int	intput_parser(const char *str, va_list args)
{
	int	count;
	int	i;

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
			i++;
			if (is_arg(str[i]))
				count = count + format_arg(str[i], args);
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

int	is_arg(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int	format_arg(char c, va_list args)
{
	int	count;

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
		count = unsigned_format(va_arg(args, unsigned long));
	else if (c == 'x')
		count = hexa_format(va_arg(args, unsigned long));
	else if (c == 'X')
		count = upper_hexa_format(va_arg(args, unsigned long));
	else if (c == '%')
		count = percent_format(c);
	return (count);
}

int	char_format(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	string_format(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	pointer_format(void *ptr)
{
	return (1);
}

int	digit_format(int digit)
{
	char	*str;
	int		len;

	str = ft_itoa(digit);
	len = string_format(str);
	free(str);
	return (len);
}

int	unsigned_format(unsigned long ul)
{
	return (1);
}

int	hexa_format(unsigned long hexa)
{
	return (1);
}

int	upper_hexa_format(unsigned long hexa)
{
	return (1);
}

int	percent_format(char c)
{
	return (1);
}

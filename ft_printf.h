/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 06:03:51 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/16 06:33:25 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int ft_printf(const char *str, ...);
int intput_parser(const char *str, va_list args);
int is_arg(char c);
int format_arg(char c, va_list args);
int char_format(char c);
int string_format(char *str);
int pointer_format(void *ptr);
int digit_format(int digit);
int unsigned_format(unsigned long ul);
int hexa_format(unsigned long hexa);
int upper_hexa_format(unsigned long hexa);
int percent_format(char c);

#endif

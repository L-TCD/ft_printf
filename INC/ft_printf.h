/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 06:03:51 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/18 07:06:38 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

size_t		ft_printf(const char *str, ...);

size_t		char_format(char c);
size_t		string_format(char *str);
size_t		pointer_format(void *ptr);
size_t		digit_format(int digit);
size_t		unsigned_format(unsigned int ul);
size_t		hexa_format(unsigned int hexa);
size_t		upper_hexa_format(unsigned int hexa);
size_t		percent_format(void);

char		*itoa_base(unsigned long long num, char *base);

#endif

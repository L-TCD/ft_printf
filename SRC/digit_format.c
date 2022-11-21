/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:53:52 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/21 11:50:04 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ft_printf.h"

static int	itoa_len(int n);
static char	*ft_itoa_err(int n, int *ret_error);

size_t	digit_format(int digit, int *ret_error)
{
	char	*str;
	int		len;

	str = ft_itoa_err(digit, ret_error);
	len = string_format(str);
	free(str);
	return (len);
}

static int	itoa_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n && ++len)
		n = n / 10;
	return (len);
}

char	*ft_itoa_err(int n, int *ret_error)
{
	int				len;
	unsigned int	n2;
	char			*str;

	len = itoa_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
	{
		*ret_error = -1;
		return (NULL);
	}
	str[len] = '\0';
	if (n < 0)
		n2 = -n;
	else
		n2 = n;
	while (--len >= 0)
	{
		if (n < 0 && len == 0)
			str[0] = '-';
		else
			str[len] = n2 % 10 + '0';
		n2 = n2 / 10;
	}
	return (str);
}

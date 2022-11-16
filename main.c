/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 06:09:32 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/16 06:41:36 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// gcc ft_printf.c main.c libft/libft.h libft/libft.a

#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	printf("*** Test 0 : sans rien ***\n");
	printf("real: string de test\n");
	ft_printf("mine: string de test\n");
}

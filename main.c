/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 06:09:32 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/17 06:42:37 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// gcc ft_printf.c main.c libft/libft.h libft/libft.a

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("*** Test 0 : sans rien ***\n");
	printf("real: string de test\n");
	ft_printf("mine: string de test\n");
	printf("\n");
	printf("*** Test 1 : valeur de retour sans rien ***\n");
	printf("real size : %d\n", printf("*** Test 1 ***\n"));
	printf("mine size : %d\n", ft_printf("*** Test 1 ***\n"));
	printf("\n");
	printf("*** Test 2 : char = 'z' ***\n");
	printf("valeur de retour du titre de Test 2 : %c\n", 'z');
	ft_printf("valeur de retour du titre de Test 2 : %c\n", 'z');
	printf("\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 06:09:32 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/18 07:11:48 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// gcc main.c libftprintf.a

#include <stdio.h>
#include "./INC/ft_printf.h"

int	main(void)
{
	// printf("*** Test 0 : sans rien ***\n");
	// printf("real: string de test\n");
	// ft_printf("mine: string de test\n");
	// printf("\n");
	// printf("*** Test 1 : valeur de retour sans rien ***\n");
	// printf("real size : %d\n", printf("*** Test 1 ***\n"));
	// printf("mine size : %d\n", ft_printf("*** Test 1 ***\n"));
	// printf("\n");
	// printf("*** Test 2 : char = 'z' ***\n");
	// printf("affichage : %c\n", 'z');
	// ft_printf("affichage : %c\n", 'z');
	// printf("\n");
	// printf("*** Test 3 : int = -33 ***\n");
	// printf("affichage : %d\n", -33);
	// ft_printf("affichage : %d\n", -33);
	// printf("\n");
	// printf("*** Test 4 : str = NULL ***\n");
	// char	*str = NULL;
	// int		pf = printf("%s", str);
	// printf("\n");
	// int		ft_pf = ft_printf("%s", str);
	// printf("\n");
	// printf("pf : %d et ft_pf : %d", pf, ft_pf);
	// printf("\n");
	// printf("*** Test 5 : percent ***\n");
	// int		pf = printf("%%");
	// printf("\n");
	// int		ft_pf = ft_printf("%%");
	// printf("\n");
	// printf("pf : %d et ft_pf : %d", pf, ft_pf);
	// printf("\n");
	// printf("*** Test 5 : ul ***\n");
	// int		pf = printf("%u", -10);
	// printf("\n");
	// int		ft_pf = ft_printf("%u", -10);
	// printf("\n");
	// printf("pf : %d et ft_pf : %d", pf, ft_pf);
	// printf("\n");
	printf("*** Test 6 : ul ***\n");
	void	*ptr = malloc(1);
	if (!ptr)
		return (1);
	int		pf = printf("%p", ptr);
	printf("\n");
	int		ft_pf = ft_printf("%p", ptr);
	printf("\n");
	printf("pf : %d et ft_pf : %d", pf, ft_pf);
	printf("\n");
	free(ptr);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:59:29 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/10/06 10:18:48 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int				r;
	int				t;
	char			s[] = "string";
	char			*p;
	unsigned int	x = 1234;

	r = ft_printf("ft_printf>-%s-%s-%p-%p-\n", "", NULL, NULL, "");
	t = printf("   printf>-%s-%s-%p-%p-\n", "", NULL, NULL, "");

	printf("ft_printf retorna >%d\n", r);
	printf("   printf retorna >%d\n\n", t);




	r = ft_printf("ft_printf>%c-%s-%i-%%-%p-\n", 'H', "string", 43, &r);
	t = printf("   printf>%c-%s-%i-%%-%p-\n", 'H', "string", 43, &r);
	printf("ft_printf retorna >%d\n", r);
	printf("   printf retorna >%d\n\n", t);
	r = ft_printf("ft_printf>%u-%x-%X\n", x, 87063, 54321);
	t = printf("   printf>%u-%x-%X\n", x, 87063, 54321);
	printf("ft_printf retorna >%d\n", r);
	printf("   printf retorna >%d\n\n", t);
	r = ft_printf("ft_printf>%%%%%%%u%i%%%c%medsu*-\n", x, 54321, 49);
//	ft_printf>%%%123454321%1edsu*-
	t = printf("   printf>%%%%%%%u%i%%%c%medsu*-\n", x, 54321, 49);
//	   printf>%%%123454321%1medsu*-
	printf("ft_printf retorna >%d\n", r);
	printf("   printf retorna >%d\n\n", t);
	r = ft_printf("ft_printf>%an%bn%cn%en%zed-\n", x, 54321, 49, 10, 5);
	t = printf("   printf>%an%bn%cn%en%zed-\n", x, 54321, 49, 10, 5);
	printf("ft_printf retorna >%d\n", r);
	printf("   printf retorna >%d\n\n", t);
	return (0);
}

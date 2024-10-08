/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:39:03 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/07/26 15:53:46 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_i(int n)
{
	char	*str;
	int		ret;

	str = ft_itoa(n);
	if (!str)
		return (-1);
	ret = put_s(str);
	free(str);
	return (ret);
}

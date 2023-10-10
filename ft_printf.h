/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:56:39 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/08/01 18:47:17 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int	ft_printf(char const *fmt, ...);
int	sel_fmt(char const *fmt, int i, va_list args);
int	put_c(char c);
int	put_i(int n);
int	put_s(char *s);
int	put_p(void *pnt, char *hex);
int	put_hex(unsigned int n, char *hex);
int	put_u(unsigned int n);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joan <jocuni-p@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 23:54:43 by joan              #+#    #+#             */
/*   Updated: 2023/06/11 00:41:57 by joan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La función 'write' toma como argumentos el descriptor de archivo (fd), un
puntero al inicio de la string y la longitud del buffer.
Esta funcion utiliza la función 'write' de la biblioteca <unistd.h> para
escribir el string apuntado por s en el descriptor de archivo especificado
por 'fd'.
Notese que le pasamos el string s a traves de su direccion como puntero.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

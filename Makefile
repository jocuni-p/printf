# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocuni-p <jocuni-p@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 16:15:05 by jocuni-p          #+#    #+#              #
#    Updated: 2023/10/04 12:42:57 by jocuni-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

NAME = libftprintf.a

LIB = ar -rcs

#'r' reeemplasara si existeix i creara si no existeix
#'c' silencia el missatge de la creacio de ar
#'s' escriu un index d'arxius .o pel seu control intern

SRC = ft_printf.c sel_fmt.c put_c.c put_s.c put_i.c put_p.c put_hex.c put_u.c

OBJ = $(SRC:.c=.o)

DEPS = $(SRC:.c=.d) 


#---------------------------REGLAS---------------------------------------#

all: makelib $(NAME)


-include $(DEPS)


$(NAME): $(OBJ)
	cp libft/libft.a $(NAME)
	$(LIB) $(NAME) $(OBJ)


makelib:
	$(MAKE) -C libft/


%.o : %.c  Makefile ft_printf.h
	$(CC) -c $(CFLAGS) -MMD -MP $< -o $@


clean:
	$(MAKE) -C libft clean
	rm -f $(OBJ) $(DEPS)


#borra els arxius creats .o (OBJ) i els .d (DEPS)
# amb -f ignorem els arxius que no existeixen, borrats ja previament


fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re


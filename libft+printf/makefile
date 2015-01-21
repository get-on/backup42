# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    PerfectMakefile                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/07 23:15:25 by ssachet           #+#    #+#              #
#    Updated: 2015/01/19 22:09:05 by ssachet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = libftprintf.a
MAIN = mainprint.c

SRC= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c ft_itoa.c ft_lstadd.c ft_lstcpy.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstlen.c ft_lstmap.c ft_lstnew.c ft_lstprint.c ft_lstsplit.c ft_ltrim.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_rtrim.c ft_stpcpy.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c assistant.c ft_printf.c cast_str_cox.c cast_to_numeric.c cast_to_wc.c conversion_type.c add.c add_format.c apply.c apply_left_width.c apply_width.c assistant.c ft_strrev.c ft_uppercase.c is.c pad_left.c pad_right.c to_s_a_c.c to_x_to_o.c makestr.c ft_has_char.c ft_ltoa.c
H = libft.h ft_printf.h
O = $(SRC:.c=.o)

all: $(LIB)

allo:
	$(CC) -c $(SRC)

$(LIB): allo
	ar rc $(LIB) $(O) $(H)
	ranlib $(LIB)

clean:
	rm -rf $(O)

fclean: clean
	rm -rf $(LIB)

re: fclean all
	#$(CC) $(CFLAGS) $(MAIN) $(LIB)

test:$(SRC)
	gcc libftprintf.a mainprint.c
.PHONY: all allo libftprintf.a mainprintf clean fclean

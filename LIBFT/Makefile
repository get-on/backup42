# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    PerfectMakefile                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/07 23:15:25 by ssachet           #+#    #+#              #
#    Updated: 2015/01/22 19:57:01 by ssachet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c ft_itoa.c ft_lstadd.c ft_lstcpy.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstlen.c ft_lstmap.c ft_lstnew.c ft_lstprint.c ft_lstsplit.c ft_ltrim.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_rtrim.c ft_stpcpy.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_uppercase.c ft_ltoa.c ft_has_char.c makestr.c pad_left.c pad_right.c ft_strrev.c free_and_null.c
PSRC = printf/ft_printf.c printf/cast_str_cox.c printf/cast_to_numeric.c printf/cast_to_wc.c printf/conversion_type.c printf/add.c printf/add_format.c printf/apply.c printf/apply_left_width.c printf/apply_width.c printf/assistant.c printf/is.c  printf/to_s_a_c.c printf/to_x_to_o.c
GETSRC= get_next_line/get_next_line.c
H = libft.h printf/ft_printf.h get_next_line/get_next_line.h

O = $(SRC:.c=.o)

all: $(LIB)

allo:
	$(CC) -c $(SRC) $(PSRC) $(GETSRC)

$(LIB): allo
	ar rc $(LIB) $(O) $(H)
	ranlib $(LIB)

clean:
	rm -rf $(O)

fclean: clean
	rm -rf $(LIB)

re: fclean all

.PHONY: all allo libftprintf.a mainprintf clean fclean

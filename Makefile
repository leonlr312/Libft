# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 13:41:38 by leoda-lu          #+#    #+#              #
#    Updated: 2023/05/17 12:03:34 by leoda-lu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

so:
	$(CC) -I. -nostartfiles -fPIC $(CFLAGS) -c *.c
	gcc -nostartfiles -shared -o libft.so *.o

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
BUILD := ./objs/
SRC =	ft_lstnew.c ft_isalpha.c ft_isascii.c \
		ft_isalnum.c ft_isdigit.c ft_isprint.c \
		ft_tolower.c ft_toupper.c \
		ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strdup.c ft_strlcat.c \
		ft_strlcpy.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strlen.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c \
		ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiteri.c ft_lstmap.c \

OBJ = $(addprefix $(BUILD), $(SRC:.c=.o))

all: $(NAME)

$(NAME) : $(OBJ)
		@ar -rcs $(NAME) $(OBJ)
$(BUILD)%.o:%.c
		@mkdir -p $(BUILD)
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		rm -rf $(BUILD)
fclean: clean
		rm -f *.a
re: fclean all
.PHONY: all clean fclean re

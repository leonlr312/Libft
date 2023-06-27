# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/20 01:41:43 by leoda-lu          #+#    #+#              #
#    Updated: 2023/06/27 09:54:58 by leoda-lu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
BUILD := ./objs/
VPATH := ./sources/FD/ ./sources/List/ ./sources/Memory/ ./sources/String/ \
		./sources/Utils/ ./sources/Gnl/ ./sources/Printf_Handle/ \

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
		ft_itoa_base.c \
		ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c \
		get_next_line.c get_next_line_utils.c \
		ft_printf.c ft_handle_character.c \
		ft_handle_decimal.c ft_handle_percent.c \
		ft_handle_hex_lower.c ft_handle_hex_upper.c \
		ft_handle_pointer.c ft_handle_string.c ft_handle_unsigned.c \

OBJ = $(addprefix $(BUILD), $(SRC:.c=.o))

all: $(NAME)

$(NAME) : $(OBJ)
		ar -rcs $(NAME) $(OBJ)
$(BUILD)%.o:%.c
		mkdir -p $(BUILD)
		$(CC) $(CFLAGS) -I ./include -c $< -o $@
clean:
		rm -rf $(BUILD)
fclean: clean
		rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re

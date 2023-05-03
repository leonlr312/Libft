# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 13:41:38 by leoda-lu          #+#    #+#              #
#    Updated: 2023/05/03 13:51:04 by leoda-lu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

so:
	$(CC) -I. -nostartfiles -fPIC $(CFLAGS) -c *.c
	gcc -nostartfiles -shared -o libft.so *.o
all:
	gcc -c -Wall -Wextra -Werror *.c
	ar -rcs libft.a *.o
clean:
	rm -f *.o
fclean: clean
	rm -f *.a
re: fclean all

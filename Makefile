# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jungmiho <jungmiho@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 18:31:31 by jungmiho          #+#    #+#              #
#    Updated: 2023/03/24 22:01:52 by jungmiho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	rm -f *.o
	cc $(CFLAGS) -c *.c
	ar -rc libft.a *.o

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

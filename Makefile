# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 18:31:31 by jungmiho          #+#    #+#              #
#    Updated: 2023/03/27 21:11:03 by jungmiho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = asdfasdfasdfasdfasdfasdfasdfasdf #  ㅍㅏ이ㄹ이름 다  적적기
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

#bonus :
#make bonus relink x
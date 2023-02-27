# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 11:19:31 by gimartin          #+#    #+#              #
#    Updated: 2022/08/17 11:23:18 by gimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex00
SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)

CC			= clang++ -std=c++98
CFLAGS		= -Wall -Wextra -Werror -I.

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				rm -f $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
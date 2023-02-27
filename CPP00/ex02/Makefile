# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/03 16:43:39 by gimartin          #+#    #+#              #
#    Updated: 2022/07/03 16:51:39 by gimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= account
SRCS		= Account.cpp tests.cpp
OBJS		= $(SRCS:.cpp=.o)

CC			= clang++
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
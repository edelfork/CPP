# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 17:05:59 by gimartin          #+#    #+#              #
#    Updated: 2022/07/06 17:47:28 by gimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= sed_is_for_losers
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
				$(RM) $(NAME) *.replace

re:				fclean $(NAME)

.PHONY:			all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 10:18:16 by gimartin          #+#    #+#              #
#    Updated: 2022/07/05 13:42:13 by gimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= this_is_brain
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
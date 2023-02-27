# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/12 12:09:57 by gimartin          #+#    #+#              #
#    Updated: 2022/08/12 12:14:45 by gimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= serialization
SRCS		= main.cpp Base.cpp
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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 17:17:27 by gimartin          #+#    #+#              #
#    Updated: 2022/07/02 18:02:33 by gimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
SRCS		= phonebook.cpp contact.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -I -g.

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				rm -f $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 21:22:11 by htaheri           #+#    #+#              #
#    Updated: 2023/04/20 13:12:19 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = 	libftprintf.a
CC     =    cc
CFLAGS =    -Wall -Wextra -Werror
RM     =    rm -f
SRCS   =    ft_printf.c ft_utils1.c ft_utils2.c

OBJS   = 	$(SRCS:.c=.o)

all:        $(NAME)
	
$(NAME):    $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

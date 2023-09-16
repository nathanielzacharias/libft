# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nzachari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 23:43:36 by nzachari          #+#    #+#              #
#    Updated: 2023/09/15 23:43:39 by nzachari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
NAME = libft.a
BONUS =	ft_lstnew.c
#ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
#					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
#					ft_lstmap.c ft_lstsize.c
BONUS_OBJS	= $(BONUS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(TARGET)

re:	fclean all

bonus:	$(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:	all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyyang <hyyang@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/24 03:01:36 by hyyang            #+#    #+#              #
#    Updated: 2021/01/24 04:47:51 by hyyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c

OBJS	= $(SRCS:%.c=%.o)

AR		= ar -crs
CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

%.o: %.c
	$(CC) $(CFLAGS) -c $<

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $^

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
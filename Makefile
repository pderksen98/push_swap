# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pderksen <pderksen@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/25 11:24:38 by pderksen      #+#    #+#                  #
#    Updated: 2022/03/31 15:49:44 by pderksen      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-
NAME := push_swap

CC := gcc

ifndef DEBUG
CFLAGS := -Wall -Wextra -Werror
else
CFLAGS := -Wall -Wextra -Werror -fsanitize=address -g
endif

SRCS := src/main.c \
		src/actions/swap.c \
		src/actions/push.c \
		src/actions/first_to_last.c \
		src/actions/last_to_first.c \
		src/relative_number.c \
		src/relative_number_2.c \
		src/radix.c \
		src/error.c \
		src/error_2.c \
		src/hard_code.c
HEADERFILES := push_swap.h

LIBFT := libft/libft.a

all: $(NAME)

$(NAME) : $(SRCS) $(LIBFT)
		$(CC) $(CFLAGS) -o $@ $^

$(LIBFT) :
	$(MAKE) -C libft

clean :
	$(MAKE) clean -C libft 

fclean :
	$(MAKE) fclean -C libft
	rm -f $(NAME)

re : fclean all

.PHONY : all, clean, fclean, re

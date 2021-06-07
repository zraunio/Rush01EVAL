# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zraunio <zraunio@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/03 11:26:38 by zraunio           #+#    #+#              #
#    Updated: 2021/06/07 13:04:39 by zraunio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush

SRCS = *.c 

CC = gcc

FLGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) :
	@echo "\\n\033[32;1mCOMPILING\033[0m \\n"
	@ $(CC) $(FLGS) -o $(NAME) $(SRCS)

clean: 
	@rm $(NAME)
		@echo "\\n\033[32;1mEXECUTABLE DELETED\033[0m \\n"
re: clean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djacobs <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 13:49:49 by djacobs           #+#    #+#              #
#    Updated: 2022/12/08 13:49:51 by djacobs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################# VARIABLES
### SRCS and OBJS

NAME		= tests
TEST_SRC	= c_tests.c 
SRCS		= $(wildcard ../*.c)
OBJS		= $(SRCS:.c=.o)
H_FILE		= $(wildcard ../*.h)

### COMP 

CC			= cc
CFLAGS		= -Wall -Werror -Wextra

################# RULES

all: $(NAME)

$(NAME):  $(H_FILES) $(OBJS)
	$(CC) $(CFLAGS) $(H_FILE) $(OBJS) $(TEST_SRC) -o $@ && ./$@
 
clean:
	rm -f $(NAME)

fclean: clean
	rm -f ../*.o

re: fclean all

.PHONY: all clean fclean re
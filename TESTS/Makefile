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

NAME		= test
SCRIPTS		= c_tests/compc.sh 
TEST_SRC	= c_tests/c_test.c 
SRCS		= $(wildcard ../*.c)
OBJS		= $(SRCS:.c=.o)
A_FILE		= $(wildcard ../*.a)

### COMP 

CC			= cc
CFLAGS		= -Wall -Werror -Wextra

################# RULES

all: scripts

scripts: $(NAME)
	bash $(SCRIPTS)

$(NAME):  $(A_FILES) $(OBJS)
	$(CC) $(CFLAGS) $(A_FILE) $(OBJS) $(TEST_SRC) -o $@
	
clean:
	rm -f $(NAME)

fclean: clean
	rm -f ../*.o

re: fclean all

.PHONY: all clean fclean re scripts
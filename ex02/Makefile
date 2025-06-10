# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/10 10:42:39 by tjorge-l          #+#    #+#              #
#    Updated: 2025/06/10 19:17:51 by tjorge-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = animals

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf

DEBUG_FLAGS = -g
VFLAGS = -s --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes

SRCS = main.cpp A_Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS = $(SRCS:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: $(NAME)
	valgrind $(VFLAGS) ./$(NAME)

debug: CFLAGS = -g -Wall -Wextra -Werror
debug: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

rdebug: debug
	valgrind $(VFLAGS) ./$(NAME)

.PHONY: all clean fclean re

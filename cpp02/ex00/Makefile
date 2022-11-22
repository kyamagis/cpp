# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 18:48:40 by kyamagis          #+#    #+#              #
#    Updated: 2022/11/16 16:40:44 by kyamagis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDE = -I ./includes/
SRCS = ./src/main.cpp\
		./src/Fixed.cpp\

OBJS = $(SRCS:.cpp=.o)
NAME = ./a.out

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

# $(NAME): $(OBJS)
# 		ar r $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
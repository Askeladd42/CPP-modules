# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 12:28:04 by plam              #+#    #+#              #
#    Updated: 2023/03/02 14:56:39 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CXX = c++
CXXFLAGS = -Wextra -Wall -Werror -std=c++98 -g3

HEADER = RPN.hpp
SRC_FILES = main.cpp, RPN.cpp
OBJS = $(SRC_FILES:.cpp=.o)
OBJS_F	= _objFiles/

all: $(NAME)

$(NAME): 

			@echo "     - Creating object directory..." 
					@mkdir -p $(OBJS_F)
					@echo "     - Making object files..." 
					$(CXX) $(CXXFLAGS) -c $(SRC_FILES)
					@echo "     - Moving object files to $(OBJS_F)..." 	
					@mv $(OBJS) $(OBJS_F)
					@echo "     - Compiling $(NAME)..." 
					$(CXX) $(CXXFLAGS) -I $(HEADER) $(addprefix $(OBJS_F), $(OBJS)) -o $(NAME)
					@echo "- $(NAME) Compiled -"

clean:
					@rm -rf $(OBJS_F)
					@rm -f ${OBJS_BONUS} ${OBJS}

fclean: 	clean
					@rm -f $(NAME)
					@rm -f $()

re:			fclean all
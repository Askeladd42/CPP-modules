# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 09:31:35 by plam              #+#    #+#              #
#    Updated: 2022/05/31 00:25:50 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sedTest

CC = c++
FLAGS = -Wextra -Wall -Werror -std=c++98

HEADER = Replace.hpp
SRC_FILES = main.cpp Replace.cpp 
OBJS = $(SRC_FILES:.cpp=.o)
OBJS_F	= _objFiles/

all: $(NAME)

$(NAME): 

			@echo "     - Creating object directory..." 
					@mkdir -p $(OBJS_F)
					@echo "     - Making object files..." 
					$(CC) $(FLAGS) -c $(addprefix $(SRC_DIR), $(SRC_FILES))
					@echo "     - Moving object files to $(OBJS_F)..." 	
					@mv $(OBJS) $(OBJS_F)
					@echo "     - Compiling $(NAME)..." 
					$(CC) $(FLAGS) -I $(HEADER) $(addprefix $(OBJS_F), $(OBJS)) -o $(NAME)
					@echo "- $(NAME) Compiled -"

clean:
					@rm -rf $(OBJS_F)
					@rm -f ${OBJS_BONUS} ${OBJS}

fclean: 	clean
					@rm -f $(NAME)
					@rm -f $()

re:			fclean all
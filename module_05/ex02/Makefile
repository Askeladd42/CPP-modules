# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 09:31:35 by plam              #+#    #+#              #
#    Updated: 2022/09/03 17:57:09 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Format

CC = c++
FLAGS = -Wextra -Wall -Werror -std=c++98 -g3

SRC_FILES = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp 
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
					$(CC) $(FLAGS) $(HEADER) $(addprefix $(OBJS_F), $(OBJS)) -o $(NAME)
					@echo "- $(NAME) Compiled -"

clean:
					@rm -rf $(OBJS_F)
					@rm -f ${OBJS_BONUS} ${OBJS}

fclean: 	clean
					@rm -f $(NAME)
					@rm -f $()
					@rm -f Garden_shrubbery

re:			fclean all
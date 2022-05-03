# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 09:31:35 by plam              #+#    #+#              #
#    Updated: 2022/04/27 14:14:02 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

CC = gcc
FLAGS = -Wextra -Wall -Werror

LIBFT_A = libft.a
LIBF_DIR = libft/
LIBFT  = $(addprefix $(LIBF_DIR), $(LIBFT_A))

HEADER	= -I./includes/
SRC_DIR = srcs/
LEXER_DIR = Lexer/

SRC_FILES = minishell.c init_struct.c token.c chain_list.c specify_token.c clear.c
OBJS = $(SRC_FILES:.c=.o)
OBJS_F	= _objFiles/

OBJS_BONUS	=	$(SRCS_BONUS:%.c=%.o)

all: $(NAME)

$(NAME): 

			@echo "     - Creating object directory..." 
					@mkdir -p $(OBJS_F)
					@echo "     - Making object files..." 
					$(CC) $(FLAGS) -c $(addprefix $(SRC_DIR), $(SRC_FILES))
					@echo "     - Moving object files to $(OBJS_F)..." 	
					@mv $(OBJS) $(OBJS_F)
					@echo "     - Compiling Libft..." 
					@make -sC $(LIBF_DIR)
					@echo "     - Compiling $(NAME)..." 
					$(CC) $(FLAGS) $(addprefix $(OBJS_F), $(OBJS)) -lreadline $(LIBFT) -o $(NAME)
					@echo "- minishell Compiled -"

bonus:		$(OBJS_BONUS) $(LIBFT)
			$(CC) $(OBJS_BONUS) $(LIBFT) $(CFLAGS) -o $(NAME)

clean:
					@make clean -sC ./libft
					@rm -rf $(OBJS_F)
					@rm -f ${OBJS_BONUS} ${OBJS}

fclean: 	clean
					@make -sC $(LIBF_DIR) fclean
					@rm -f $(NAME)
					@rm -f $()

re:			fclean all
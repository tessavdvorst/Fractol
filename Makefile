# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Tessa <Tessa@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/01/11 14:02:46 by Tessa         #+#    #+#                  #
#    Updated: 2022/01/13 11:54:15 by Tessa         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

GREEN = 	\033[38;5;2m
NORMAL = 	\033[38;5;255m
RED = 		\033[38;5;1m

NAME =      fractol

SRCS =      ./src/openwin.c \
			./src/draw_shapes.c

OFILES =    $(SRCS:.c=.o)

INCLUDES =  ./libft \
            ./mlx

CC = 		gcc
RM = 		rm -f
CFLAGS = 	-Wall -Wextra -Werror
MLXFLAGS = 	-framework OpenGl -framework AppKit

all:        $(NAME)

$(NAME):	$(OFILES) $(INCLUDES)
			make -C libft/
			cp libft/libft.a .
			make -C mlx/
			cp mlx/libmlx.dylib .
			$(CC) -Lmlx -lmlx -Llibft -lft -o $(NAME) $(OFILES) $(CFLAGS) $(MLXFLAGS)
			@echo "$(GREEN)Successfully compiled!$(NORMAL)"

%.o:        %.c
			@echo "$(GREEN)Compiling:$(NORMAL)"
			gcc -Ilibft -Imlx -c $< -o $@ -Wall -Werror -Wextra
			
clean:
			@echo "$(RED)Removing all object files...$(NORMAL)"
			$(RM) $(OFILES)
			make clean -C libft/
			make clean -C mlx/
			@echo "$(GREEN)Succesfully removed all object files!$(NORMAL)"

fclean:		clean
			@echo "$(RED)Removing libraries...$(NORMAL)"
			$(RM) mlx/libmlx.dylib
			$(RM) libmlx.dylib
			$(RM) libft/libft.a
			$(RM) libft.a
			$(RM) $(NAME)
			@echo "$(GREEN)Successfully removed libraries!$(NORMAL)"

re:        	fclean all

.PHONY: 	all clean fclean re





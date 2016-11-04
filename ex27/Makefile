# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alcollin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 11:09:51 by alcollin          #+#    #+#              #
#    Updated: 2016/11/04 11:09:56 by alcollin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
			gcc -c $(FLAGS) $(SRC)
					gcc -o $(NAME) ft_display_file.o

clean:
			/bin/rm -f ft_display_file.o

fclean: clean
			/bin/rm -f $(NAME)
re: fclean all

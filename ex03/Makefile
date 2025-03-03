# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gozon <gozon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 11:02:35 by gozon             #+#    #+#              #
#    Updated: 2025/03/03 09:45:28 by gozon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
CC = clang++
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wpedantic -std=c++98
SRC_FILES =  Materia/AMateria.cpp Materia/Ice.cpp Materia/Cure.cpp main.cpp
OBJ_DIRS = objects objects/Materia objects/Character objects/MateriaSource
OBJ_DIR = objects
OBJ = $(SRC_FILES:%.cpp=$(OBJ_DIR)/%.o)

# Symboles Unicode
CHECK_MARK = ✔

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "$(NAME) a été créé avec succès ($(CHECK_MARK))"

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIRS)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIRS):
	@mkdir -p $(OBJ_DIRS)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Nettoyage réussi ($(CHECK_MARK))"

fclean:
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)
	@echo "Nettoyage complet réussi ($(CHECK_MARK))"

re: fclean all

.PHONY: all clean fclean re

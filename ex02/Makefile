NAME = Animal
SRC =  main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp WrongCat.cpp WrongAnimal.cpp
OBJ = ${SRC:.cpp=.o}
CC = c++
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
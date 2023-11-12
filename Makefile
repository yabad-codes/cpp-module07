SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

NAME = template

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CXXFLAGS} ${OBJ} -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
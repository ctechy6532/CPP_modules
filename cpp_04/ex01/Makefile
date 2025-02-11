NAME	=	polymorphisme

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

SRC		=	main.cpp  Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp 

OBJS = ${SRC:.cpp=.o}

${NAME} : ${OBJS}
		@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}
		@echo "building"

clean :
		@${RM} ${OBJS}
		@echo "clean all files *.0"

fclean : clean
		@${RM} ${NAME}
		@echo "clean ${NAME}"

re : fclean all
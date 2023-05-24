NAME	=	phonebook

SRCS	=	main.cpp PhoneBook.cpp Contact.cpp

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

${NAME}: ${SRCS} Makefile PhoneBook.hpp Contact.hpp
	${CC} ${FLAGS} ${SRCS} -o ${NAME}

all:	${NAME}

clean:
	${RM} ${NAME}

re:		clean all

.PHONY:	all clean re

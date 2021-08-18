NAME = interfaces
CC = clang++
CFLAGS = -Wall -Wextra -Werror -Iincludes

FILES = main.cpp\
		AMateria.cpp\
		Cure.cpp\
		Ice.cpp\
		Character.cpp\

HEADERS = AMateria.hpp\
		  Cure.hpp\
		  Ice.hpp\
		  ICharacter.hpp\
		  Character.hpp\

SRCS = $(FILES)

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp Makefile $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

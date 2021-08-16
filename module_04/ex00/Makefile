NAME = animal
CC = clang++
CFLAGS = -Wall -Wextra -Werror

FILES = main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\

SRCS = $(FILES)

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp Makefile Animals.hpp Dog.hpp Cat.hpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

NAME = scavtrap
CC = clang++
CFLAGS = -Wall -Wextra -Werror

FILES = main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\

SRCS = $(FILES)

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp Makefile ClapTrap.hpp ScavTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

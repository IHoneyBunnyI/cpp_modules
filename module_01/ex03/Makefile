NAME = weapon
CC = clang++
CFLAGS = -Wall -Wextra -Werror

FILES = main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp\


SRCS = $(FILES)

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

NAME = zombie

CC = clang++
CFLAGS = -Wall -Wextra -Werror

FILES = main.cpp\
	newZombie.cpp\
	randomChump.cpp\
	Zombie.cpp

SRCS = $(FILES)

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

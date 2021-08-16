NAME = animal
CC = clang++
CFLAGS = -Wall -Wextra -Werror -Iincludes

FILES = Animals.cpp\


SRCS = $(FILES)

HEADERS = Animals.hpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

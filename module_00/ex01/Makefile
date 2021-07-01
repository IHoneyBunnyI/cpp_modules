NAME = phonebook
CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp\
       Contact.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

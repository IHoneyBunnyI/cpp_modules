NAME = phonebook
CC = clang++
CFLAGS = -Wall -Wextra -Werror -Iincludes

FILES = main.cpp\
	Contact.cpp\
	Phonebook.cpp\

SRCS = $(addprefix srcs/, $(FILES))

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

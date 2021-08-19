NAME = bureaucrat
CC = clang++
CFLAGS = -Wall -Wextra -Werror

FILES = main.cpp\
		Bureaucrat.cpp\

SRCS = $(FILES)

HEADERS = Bureaucrat.hpp

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

NAME = cast
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

FILES = main.cpp

SRCS = $(FILES)

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o : %.cpp Makefile
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

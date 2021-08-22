NAME = iter
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

FILES = main.cpp

SRCS = $(FILES)

HEADERS = iter.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o : %.cpp Makefile $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

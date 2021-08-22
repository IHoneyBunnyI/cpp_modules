NAME = bsp
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

FILES = main.cpp\
		bsp.cpp\
		Fixed.cpp\
		Point.cpp\

SRCS = $(FILES)

HEADERS = Fixed.hpp\
		  Point.hpp\

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

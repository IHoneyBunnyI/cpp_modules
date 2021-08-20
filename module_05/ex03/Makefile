NAME = bureaucrat
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

FILES = main.cpp\
		Bureaucrat.cpp\
		Form.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp\

SRCS = $(FILES)

HEADERS = Bureaucrat.hpp\
		  Form.hpp\
		  PresidentialPardonForm.hpp\
		  RobotomyRequestForm.hpp\
		  ShrubberyCreationForm.hpp\

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

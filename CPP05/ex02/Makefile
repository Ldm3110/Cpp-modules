NAME = cpp05ex02

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRCS =	main.cpp\
		classes/Bureaucrat/Bureaucrat.cpp\
		classes/Exceptions/Exceptions.cpp\
		classes/Form/Form.cpp\
		classes/Form/Shrubbery/Shrubbery.cpp\
		classes/Form/Robotomy/Robotomy.cpp\
		classes/Form/Presidential/Presidential.cpp

OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(OBJDIR)
	rm -f $(NAME)
	rm *_shrubbery

re: fclean all

.PHONY: all clean fclean re
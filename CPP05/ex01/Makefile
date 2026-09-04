NAME = cpp05ex01

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRCS =	main.cpp\
		classes/Bureaucrat/Bureaucrat.cpp\
		classes/Exceptions/Exceptions.cpp\
		classes/Form/Form.cpp

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

re: fclean all

.PHONY: all clean fclean re
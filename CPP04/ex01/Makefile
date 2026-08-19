NAME = cpp04ex01

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRCS =	main.cpp\
		classes/Animal/Animal.cpp\
		classes/Dog/Dog.cpp\
		classes/Cat/Cat.cpp\
		classes/Brain/Brain.cpp\
		classes/wrong/WrongAnimal.cpp\
		classes/wrong/WrongCat.cpp

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

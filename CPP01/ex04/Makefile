NAME = cpp01ex04

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRCS =	main.cpp\

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
	rm *.replace

re: fclean all

.PHONY: all clean fclean re

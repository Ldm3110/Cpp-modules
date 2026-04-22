NAME = accounts

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = tests.cpp \
	   Account.cpp\

OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(OBJDIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

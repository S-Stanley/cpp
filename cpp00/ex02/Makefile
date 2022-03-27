NAME = account
RM = rm -rf
SRCS = tests.cpp Account.cpp
OBJS = $(SRCS:.cpp=.o)
DEP = $(OBJS:.o=.d)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
CFLAGS = $(FLAGS) -MMD

all: $(NAME)

-include $(DEP)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) $(DEP)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME = replace
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CFLAGS = $(FLAGS) -MMD
RM = rm -rf
DEP = $(OBJS:.o=.d)
CC = c++

all: $(NAME);

-include $(DEP)

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)
	$(RM) $(DEP)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
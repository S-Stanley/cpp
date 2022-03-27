NAME = fixed
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
DEP = $(OBJS:.o=.d)
FLAGS = -Wall -Wextra -Werror -std=c++98
CFLAGS = $(FLAGS) -MMD
RM = rm -rf
CC = c++

all: $(NAME)

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
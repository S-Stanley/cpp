NAME = cast
SRCS = main.cpp Data.cpp
OBJS = $(SRCS:.cpp=.o)
DEP = $(OBJS:.o=.d)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wno-unused -Wconversion
CFLAGS = $(FLAGS) -MMD
RM = rm -rf

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

.PHONY: all clean fclean re

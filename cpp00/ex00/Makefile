NAME = megaphone
SRCS = megaphone.cpp
OBJS =$(SRCS:.cpp=.o)
CC = c++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98
CFLAGS = $(FLAGS) -MMD 
DEP = $(OBJS:.o=.d)

all: $(NAME)

-include $(DEP)

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) $^ -o $@

clean:
	$(RM) $(OBJS)
	$(RM) $(DEP)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME = baston
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98
CFLAGS = $(FLAGS) -MMD
CC = c++
DEP = $(OBJS:.o=.d)

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
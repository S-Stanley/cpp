NAME = zombie
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp ZombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
CFLAGS = -MMD $(FLAGS)
RM = rm -rf
DEP = $(OBJS:.o=.d)

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
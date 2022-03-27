NAME = repertoire
SRC = main.cpp Contact.cpp PhoneBook.cpp 
OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
CFLAGS = -MMD $(FLAGS)
RM = rm -rf
DEP = $(OBJ:.o=.d)

all: $(NAME)

-include $(DEP)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	$(RM) $(DEP)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
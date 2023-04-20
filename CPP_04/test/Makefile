SRCS		= main.cpp Character.cpp  Warrior.cpp
OBJS		= $(SRCS:.cpp=.o)
INCLUDES	= Cat.hpp  Character.hpp  Warrior.hpp
NAME		= test
FLAG		= -Wall -Wextra -Werror -std=c++98
COMP		=  c++

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(COMP) $(FLAG) $(OBJS) $(INCLUDES) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

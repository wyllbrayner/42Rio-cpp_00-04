SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS		= $(SRCS:.cpp=.o)
INCLUDES	= ClapTrap.hpp ScavTrap.hpp
NAME		= scavtrap
FLAG		= -Wall -Wextra -Werror -std=c++98
COMP		=  c++

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(COMP) $(FLAG) $(OBJS) $(INCLUDES) 
	mv a.out $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

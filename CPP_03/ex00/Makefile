SRCS        = main.cpp ClapTrap.cpp
OBJS        = $(SRCS:.cpp=.o)
INCLUDES	= ClapTrap.hpp
NAME        = claptrap
FLAG        = -Wall -Wextra -Werror -std=c++98
COMP        =  c++

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(COMP) $(FLAG) $(OBJS) $(INCLUDES) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
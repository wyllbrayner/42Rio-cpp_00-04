SRCS        = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS        = $(SRCS:.cpp=.o)
INCLUDES	= HumanA.hpp HumanB.hpp Weapon.hpp
NAME        = unviolence
FLAG        = -Wall -Wextra -Werror -std=c++98
COMP        =  c++

all: $(NAME)

$(NAME): $(OBJS)
	$(COMP) $(FLAG) $(OBJS) $(INCLUDES) 
	mv a.out $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
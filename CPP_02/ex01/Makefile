SRCS        = main.cpp Fixed.cpp
OBJS        = $(SRCS:.cpp=.o)
INCLUDES	= Fixed.hpp
NAME        = a.out
FLAG        = -Wall -Wextra -Werror -std=c++98
COMP        =  c++

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(COMP) $(FLAG) $(OBJS) $(INCLUDES)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
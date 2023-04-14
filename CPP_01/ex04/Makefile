SRCS        = main.cpp
OBJS        = $(SRCS:.cpp=.o)
INCLUDES	= replace.hpp
NAME        = replace
FLAG        = -Wall -Wextra -Werror -std=c++98
COMP        =  c++

all: $(NAME)

$(NAME): $(OBJS)
	$(COMP) $(FLAG) $(OBJS) $(INCLUDES) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
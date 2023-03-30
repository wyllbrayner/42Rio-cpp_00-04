SRCS        = main.cpp
OBJS        = $(SRCS:.cpp=.o)
NAME        = phonebook
FLAG        = -Wall -Wextra -Werror -std=c++98
COMP        =  c++

all: $(NAME)

$(NAME): $(OBJS)
	$(COMP) $(FLAG) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
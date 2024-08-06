SRCS        = main.cpp PhoneBook.cpp Contact.cpp
OBJS        = $(SRCS:.cpp=.o)
INCLUDES	= PhoneBook.hpp Contact.hpp
NAME        = phonebook
FLAG        = -Wall -Wextra -Werror -std=c++98
COMP        =  c++

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
NAME        = megaphone
SRCS        = megaphone.cpp
OBJDIR		= ./obj/
OBJS		= $(addprefix $(OBJDIR), $(notdir $(SRCS:.cpp=.o)))
FLAG        = -Wall -Wextra -Werror -std=c++98
COMP        = c++
RM			= rm -rf
YELLOW		= \033[33m
GREEN		= \033[32m
RESET		= \033[0m

all: $(NAME)

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(COMP) $(FLAG) -c $< -o $@
	@echo -n "#"

$(NAME): $(OBJS)
	@$(COMP) $(FLAG) -o $(NAME) $(OBJS)
	@echo "\n\$(GREEN) 💯 | $(NAME) created.$(RESET)"

clean:
	$(RM) $(OBJDIR)
	@echo "$(YELLOW) 🧹 | $(NAME) cleaned.$(RESET)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(YELLOW) 🌪️ | $(NAME) all cleaned.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
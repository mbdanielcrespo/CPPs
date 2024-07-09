NAME = SedWho

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -I.

RM = rm -rf

OBJDIR = obj

SRC = main.cpp 
INC = 
OBJ	= $(SRC:%.cpp=$(OBJDIR)/%.o)

GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m

all: $(NAME)

$(OBJDIR)/%.o: %.cpp $(INC)
	@mkdir -p $(OBJDIR)
	@echo "Compiling $< ..."
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME):  $(OBJ)
	@echo "$(GREEN)Compiled $(NAME) successfully!$(NC)"
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	@echo "$(RED)Clearing files and obj$(NC)"
	@$(RM) $(OBJDIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

test:
	./$(NAME)
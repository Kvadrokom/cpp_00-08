NAME := burea

CC		=	clang++

CFLAGS	= 	-g -std=c++98 -Wall -Wextra -Werror

OBJDIR	=	objs
SRCDIR	=	src

SRC :=  main.cpp\
		Bureaucrat.cpp\
		Form.cpp\
		ShrubberyCreationForm.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		Intern.cpp\
		Choice.cpp

SRC		:=	$(addprefix $(SRCDIR)/, $(SRC))
OBJ		=	$(patsubst $(SRCDIR)/%, $(OBJDIR)/%, $(SRC:.cpp=.o))

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ):		$(OBJDIR)

$(OBJDIR):
			@mkdir $(OBJDIR)

$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp includes/*.hpp
			$(CC) $(CFLAGS) -c -I ./includes $< -o $@

clean:
			@rm -rf $(OBJDIR)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

leak:
	export MallocStackLoggingNoCompact=1

valg:
	valgrind --leak-check=full

norm:
	norminette $(SRC)

add:
	git add $(SRC) Makefile
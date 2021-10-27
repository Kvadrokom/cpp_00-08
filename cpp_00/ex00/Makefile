NAME := megaphone

CC		=	clang++

CFLAGS	= 	-Wall -Wextra -Werror

OBJDIR	=	objs
SRCDIR	=	src

SRC :=  megaphone.cpp

SRC		:=	$(addprefix $(SRCDIR)/, $(SRC))
OBJ		=	$(patsubst $(SRCDIR)/%, $(OBJDIR)/%, $(SRC:.cpp=.o))

all:		$(NAME)

$(NAME):	$(OBJ) $(LIBFT)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)

$(OBJ):		|$(OBJDIR)

$(OBJDIR):
			@mkdir $(OBJDIR)

$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp 
			$(CC) $(CFLAGS) -c $< -o $@

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
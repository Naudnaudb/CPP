NAME		= bureau

CC			= c++
INCLUDES	= ./
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -I $(INCLUDES)

SRCS		= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
			  RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
SRCD		= ./

OBJ			= $(SRCS:.cpp=.o)
OBJD		= objs/
OBJS		= $(addprefix $(OBJD), $(OBJ))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJD)%.o : $(SRCD)%.cpp
	@mkdir -p $(OBJD)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJD)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re test
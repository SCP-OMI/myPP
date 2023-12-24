NAME = Bureaucrat_Formed
CFLAGS = c++ -std=c++98

FILES = Srcs/main.cpp Srcs/Bureaucrat.cpp Srcs/AForm.cpp Srcs/PresidentialPardonForm.cpp Srcs/RobotomyRequestForm.cpp Srcs/ShrubberyCreationForm.cpp

all : $(NAME)

$(NAME): $(FILES)
	$(CFLAGS) $(FILES) -o  $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all fclean re clean
NAME	= Unnecessary_violence

SRC		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

all	: $(NAME)

${NAME}	: 
	@clang++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean   :
	@${RM} ${OBJ}

fclean	: clean
	@${RM} $(NAME)

re		: fclean all

.PHONY	:	all fclean re clean

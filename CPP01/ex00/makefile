NAME	= Zombie

SRC		= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

all	: $(NAME)

${NAME}	: 
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean   :
	@${RM} ${OBJ}

fclean	: clean
	@${RM} $(NAME)

re		: fclean all

.PHONY	:	all fclean re clean

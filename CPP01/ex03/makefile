NAME	= Unnecessary_violence

SRC		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(FILES:.cpp=.o)

RM		= rm -f

all	: $(NAME)

${NAME}	: $(OBJS)
	@c++ $(CPPFLAGS) $(SRC) -o $(NAME)

%.o: %.cpp
	$(CFLAGS) -c $< -o $@

clean   :
	@${RM} ${OBJ}

fclean	: clean
	@${RM} $(NAME)

re		: fclean all

.PHONY	:	all fclean re clean

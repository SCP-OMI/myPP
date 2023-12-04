NAME = Interface
CFLAGS = c++ -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address

FILES = Srcs/main.cpp Srcs/AMateria.cpp Srcs/Character.cpp Srcs/Cure.cpp Srcs/Ice.cpp Srcs/MateriaSource.cpp
OBJS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) 
		$(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean all fclean re
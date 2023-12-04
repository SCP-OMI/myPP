NAME = Poly
CFLAGS = c++ -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address

FILES = Srcs/main.cpp Srcs/Dog.cpp Srcs/Cat.cpp Srcs/Animal.cpp Srcs/WrongAnimal.cpp Srcs/WrongCat.cpp Srcs/Brain.cpp
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
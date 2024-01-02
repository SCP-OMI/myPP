NAME = Serializer
CFLAGS = c++ -Wall -Wextra -Werror -std=c++98

FILES = Srcs/main.cpp Srcs/Serializer.cpp

all : $(NAME)

$(NAME): $(FILES)
	$(CFLAGS) $(FILES) -o  $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all fclean re clean
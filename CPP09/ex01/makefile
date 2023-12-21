NAME = RPN
CFLAGS = c++ -std=c++98

FILES = Srcs/main.cpp Srcs/RPN.cpp

all : $(NAME)

$(NAME): $(FILES)
	$(CFLAGS) $(FILES) -o  $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all fclean re clean
NAME = Ṣ̴͚̋̕t̷̯͖̟̞̽̈̒̄̎̉̅̆͐̀͘͜͠͝͠a̵̡̙͙̬̖̯̪̥̰̰̹̝̩̓̄̀̃͂͑͗̔̓c̴̛̭͚̲̙̝̍͊͒̎̓́̌̔̅͘͝͝ķ̴̨̮̪̘͇̦̦̺̤̥̯̟̊̄͘͜ͅ
CFLAGS = c++ -Wall -Wextra -Werror -std=c++98

FILES = Srcs/main.cpp

all : $(NAME)

$(NAME): $(FILES)
	$(CFLAGS) $(FILES) -o  $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all fclean re clean
NAME = Harl2.0

CPP = main.cpp\
	Harl.cpp\

OOO = $(CPP:.cpp=.o)\

FLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OOO)
	c++ $(OOO) $(FLAG) -o $(NAME)
$(OOO): $(CPP)
	c++ -c $(CPP) $(FLAG)
clean:
	rm -f $(OOO)
fclean: clean
	rm -f $(NAME)
re: fclean all
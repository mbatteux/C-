NAME = Abstract
CPP = main.cpp\
	AAnimal.cpp\
	Dog.cpp\
	Cat.cpp\
	Brain.cpp\

OOO = $(CPP:.cpp=.o)

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
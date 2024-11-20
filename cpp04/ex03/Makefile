NAME = Materia
CPP = main.cpp\
	Character.cpp\
	MateriaSource.cpp\
	AMateria.cpp\
	Ice.cpp\
	Cure.cpp\

OOO = $(CPP:.cpp=.o)

FLAG = -Wall -Wextra -Werror -std=c++98 -g3

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
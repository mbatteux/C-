#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* Wmeta = new WrongAnimal();
	const WrongAnimal* Wi = new WrongCat();
	
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << Wmeta->getType() << " " << std::endl;
	std::cout << Wi->getType() << " " << std::endl;
	std::cout << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	Wmeta->makeSound();
	Wi->makeSound();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	delete Wmeta;
	delete Wi;
	return 0;
}
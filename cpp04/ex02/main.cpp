#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// const AAnimal* meta = new AAnimal;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	// if (meta != NULL)
	// 	std::cout << meta->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	// if (meta != NULL)
	// 	meta->makeSound();
	std::cout << std::endl;
	// if (meta != NULL)
	// 	delete meta;
	delete j;
	delete i;
	return 0;
}

// int main() // copi chat
// {
// 	Dog* i = new Dog();
// 	Dog* j = new Dog(*i);

// 	std::cout << std::endl;
// 	for (int k = 0; k < 5; k++)
// 	{
// 		std::cout << "i ideas : " << i->getBrain()->getIdeas()[k] << std::endl;
// 		std::cout << "j ideas : " << j->getBrain()->getIdeas()[k] << std::endl;
// 		std::cout << std::endl;
// 	}
// 	delete i;
// 	std::cout << std::endl;
// 	for (int k = 0; k < 5; k++)
// 	{
// 		std::cout << "j ideas : " << j->getBrain()->getIdeas()[k] << std::endl;
// 	}
// 	std::cout << std::endl;
// 	delete j;
// 	return 0;
// }


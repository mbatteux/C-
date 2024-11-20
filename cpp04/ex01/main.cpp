#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	return 0;
}

int	main(void)
{
	Cat c1;
	Cat c2;

	c1 = c2;
}


// int main() // copi chat
// {
// 	Cat* i = new Cat();
// 	Cat* j = new Cat(*i);

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

// int main()
// {
// 	Animal	*meta[4];

// 	meta[0] = new Cat();
// 	meta[1] = new Dog();
// 	meta[2] = new Cat();
// 	meta[3] = new Dog();

// 	std::cout << std::endl;
// 	std::cout << meta[0]->getType() << " " << std::endl;
// 	std::cout << meta[1]->getType() << " " << std::endl;
// 	std::cout << meta[2]->getType() << " " << std::endl;
// 	std::cout << meta[3]->getType() << " " << std::endl;
// 	std::cout << std::endl;
// 	for (int i = 0; i < 4; i++)
// 	{
// 		delete meta[i];
// 	}
// 	return 0;
// }
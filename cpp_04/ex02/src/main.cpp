#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void) 
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Dog basic;
	basic.setIdeas("\033[31mI hate Cats!!!\033[0m", 1);
	Cat cat;
	std::cout << cat.getIdeas(1) << std :: endl;
	cat.setIdeas("\033[34mI hate Dogs!!!\033[0m", 1);
	std::cout << cat.getIdeas(1) << std :: endl;
	{
		Dog dog;
		Dog tmp = basic;
		std::cout << basic.getIdeas(1) << std :: endl;
		dog = basic;
		std::cout << dog.getIdeas(1) << std :: endl;
	}

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	Animal *zveruga[10] ;
	for (size_t i = 0; i < 5; i++)
		zveruga[i] = new Dog();
	std::cout << "\n\n";
	for (size_t i = 5; i < 10; i++)
		zveruga[i] = new Cat();
	std::cout << "\n\n";
	for (size_t i = 0; i < 10; i++)
		delete zveruga[i];
	std::cout << "\n\n";
	delete i;
	delete j;
	return 0;
}
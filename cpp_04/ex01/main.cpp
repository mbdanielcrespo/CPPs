#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int	main(void)
{
	Animal* ani = new Animal;
	Animal* cat = new Cat;
	Animal* dog = new Dog;

	std::cout << YELLOW << "animal is type: " << ani->getType() << RESET << std::endl;
	std::cout << YELLOW << "cat is type: " << cat->getType() << RESET << std::endl;
	std::cout << YELLOW << "dog is type: " << dog->getType() << RESET << std::endl;
	cat->makeSound();
	dog->makeSound();

	cat->setBrain(new Brain);
	cat->getBrain()->shareIdea(-20);
	cat->getBrain()->shareIdea(20);
	//dog->brain = new Brain;

	delete ani;
	delete dog;
	delete cat;

	return (0);
}
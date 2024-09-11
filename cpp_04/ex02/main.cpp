#include <AAnimal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int	main(void)
{
	AAnimal* ani;
	AAnimal* cat = new Cat;
	AAnimal* dog = new Dog;

	std::cout << YELLOW << "cat is type: " << cat->getType() << RESET << std::endl;
	std::cout << YELLOW << "dog is type: " << dog->getType() << RESET << std::endl;
	cat->makeSound();
	dog->makeSound();

	cat->setBrain(new Brain);
	cat->getBrain()->shareIdea(-20);
	cat->getBrain()->shareIdea(20);

	delete dog;
	delete cat;

	return (0);
}

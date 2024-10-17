#include <AAnimal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int	main(void)
{
	//AAnimal animal_error;
	AAnimal* animals[4];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

	for (int i = 0; i < 4; ++i)
    {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }

	for (int i = 0; i < 4; ++i)
		delete animals[i];

	return (0);
}

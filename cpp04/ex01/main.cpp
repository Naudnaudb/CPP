#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* hybrid[10];
	Animal* animal = new Animal("Cat");

	animal->makeSound();
	for (int x = 0; x < 5; x++)
		hybrid[x] = new Cat();
	for (int x = 5; x < 10; x++)
		hybrid[x] = new Dog();
	for (int x = 0; x < 10; x++)
		delete hybrid[x];
	delete animal;
	return 0;
}
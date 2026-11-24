#include "Animal.h"

Animals::Animal::~Animal()
{
}

void Animals::Animal::makeSound() const
{
	std::cout << "animal" << std::endl;
}

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
	name("")
{
}

Zombie::Zombie(std::string name):
	name(name)
{
}

Zombie::~Zombie()
{
	std::cout << this->getName() << " destroyed" << std::endl;
}

void
	Zombie::setName(std::string name)
{
	this->name = name;
}

std::string
	Zombie::getName() const
{
	return (this->name);
}

void
	Zombie::announce()
{
	std::cout << this->getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

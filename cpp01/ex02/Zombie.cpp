#include "Zombie.hpp"

Zombie::Zombie()
{
	this->announce();
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	this->announce();
}

Zombie::~Zombie()
{
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type;
	std::cout <<  ")> Braiiiiiiinnnssss..." << std::endl;
}

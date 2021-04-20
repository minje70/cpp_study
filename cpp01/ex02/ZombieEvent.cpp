#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	srand(time(NULL));
	type = "default";
}

ZombieEvent::~ZombieEvent()
{
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie(name, this->type);
	return zombie;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

std::string	randomName()
{
	std::string	name[10] = {"hyeonski", "kilee", "mijeong", "hyeonkim", "hyopark"
							, "ekim", "hekang", "yepark", "hson", "dokang"};

	return (name[rand() % 10]);
}

Zombie *ZombieEvent::randomChump()
{
	return newZombie(randomName());
}

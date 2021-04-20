#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string type;
public:
	ZombieEvent();
	~ZombieEvent();

	Zombie	*newZombie(std::string name);
	void	setZombieType(std::string type);
	Zombie	*randomChump();
};

#endif

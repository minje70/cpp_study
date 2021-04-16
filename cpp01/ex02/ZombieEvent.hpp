#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

class ZombieEvent
{
private:

public:
	ZombieEvent()
	~ZombieEvent();

	Zombie*	newZombie(std::string name);
};

#endif
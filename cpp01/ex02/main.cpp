#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
	Zombie	*zombie[10];
	Zombie	zomibe2;
	ZombieEvent	event;

	for (int i = 0; i < 10; i++)
	{
		zombie[0] = event.randomChump();
		delete zombie[0];
	}

	while (1)
		;
	return (0);
}
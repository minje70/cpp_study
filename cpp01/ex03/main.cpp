#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void	func()
{
	ZombieHorde zombieHorde(10);

	zombieHorde.announce();
}

int main()
{
	func();
	while (1)
		;
	return 0;
}

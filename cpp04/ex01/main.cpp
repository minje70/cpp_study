#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main()
{
	SuperMutant rad;
	Enemy *enemy = &rad;

	std::cout << "enemy->hp : " << enemy->getHP() << "\nenemy->type : " << enemy->getType() << std::endl << std::endl;
	for (int i = 0; i < 8; i++)
	{
		enemy->takeDamage(30);
	}
	return 0;
}

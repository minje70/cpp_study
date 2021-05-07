#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

// int main()
// {
	// SuperMutant rad;
	// Enemy *enemy = &rad;

	// std::cout << "enemy->hp : " << enemy->getHP() << "\nenemy->type : " << enemy->getType() << std::endl << std::endl;
	// for (int i = 0; i < 8; i++)
	// {
	// 	enemy->takeDamage(30);
	// }

	// Character	c1("mijeong");
	// Character	c2(c1);
	// return 0;
// }

int main()
{
	{
		Character* me = new Character("me");

		std::cout << *me;

		Enemy* b = new RadScorpion();

		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();

		me->equip(pr);
		std::cout << *me;
		me->equip(pf);

		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
	}

	std::cout << "*********************************************************************************" << std::endl;

	Character* me = new Character("me");
	Enemy* b = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();

	me-> equip(pr);
	std::cout << *me;
	std::cout << b->getHP() << std::endl;
	me->attack(b);
	std::cout << b->getHP() << std::endl;
	me->attack(b);
	std::cout << b->getHP() << std::endl;
	me->attack(b);
	std::cout << b->getHP() << std::endl;
	me->attack(b);
	std::cout << b->getHP() << std::endl;
	me->attack(b);
	std::cout << b->getHP() << std::endl;
	me->attack(b);
	std::cout << b->getHP() << std::endl;
	me->attack(b);
	std::cout << b->getHP() << std::endl;
	me->attack(b);
	std::cout << b->getHP() << std::endl;
	me->recoverAP();
	std::cout << "ap : " << me->getAP() << std::endl;
	me->recoverAP();
	std::cout << "ap : " << me->getAP() << std::endl;
	me->recoverAP();
	std::cout << "ap : " << me->getAP() << std::endl;
	me->recoverAP();
	std::cout << "ap : " << me->getAP() << std::endl;
	me->recoverAP();
	std::cout << "ap : " << me->getAP() << std::endl;
	me->attack(b);
	std::cout << b->getHP() << std::endl;
	me->attack(b);
	
	return 0;
}
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	NinjaTrap a = NinjaTrap("mijeong");
	NinjaTrap *b;
	NinjaTrap c;
	c = a;
	c.~NinjaTrap();

	std::cout << "생성완료**************************" << std::endl;
	b = new NinjaTrap;
	a.rangedAttack("hyeonkim");
	a.meleeAttack("hyeonkim");
	a.takeDamage(40);
	a.takeDamage(30);
	a.takeDamage(90);
	a.takeDamage(30);
	a.beRepaired(150);

	delete b;

	return 0;
}
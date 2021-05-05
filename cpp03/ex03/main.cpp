#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

// 닌자 상속
int main()
{
	NinjaTrap a = NinjaTrap("mijeong");
	NinjaTrap *b;
	NinjaTrap c;

	std::cout << "생성완료********************************************************************************************************" << std::endl;
	b = new NinjaTrap;
	a.rangedAttack("hyeonkim");
	a.meleeAttack("hyeonkim");
	a.takeDamage(40);
	a.takeDamage(30);
	a.takeDamage(90);
	a.takeDamage(30);
	a.beRepaired(60);

	delete b;
	std::cout << "clapTrap, fragTrap, scavTrap, ninjaTrap 생성 ********************************************************************************************************" << std::endl;
	ClapTrap	clap;
	FragTrap	frag;
	ScavTrap	scav;
	NinjaTrap	ninja;
	
	a.ninjaShoebox(clap);
	a.ninjaShoebox(frag);
	a.ninjaShoebox(scav);
	a.ninjaShoebox(ninja);
	std::cout << "clapTrap, fragTrap, scavTrap, ninjaTrap 죽음 ********************************************************************************************************" << std::endl;
	return 0;
}
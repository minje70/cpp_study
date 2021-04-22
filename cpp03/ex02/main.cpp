#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap a = FragTrap("mijeong");
	FragTrap *b;

	b = new FragTrap;
	a.rangedAttack("hyeonkim");
	a.meleeAttack("hyeonkim");
	a.takeDamage(40);
	a.takeDamage(30);
	a.takeDamage(90);
	a.takeDamage(30);
	a.beRepaired(150);

	delete b;
	a.vaulthunter_dot_exe("kilee");
	a.vaulthunter_dot_exe("kilee");
	a.vaulthunter_dot_exe("kilee");
	a.vaulthunter_dot_exe("kilee");
	a.vaulthunter_dot_exe("kilee");

	ScavTrap aa("스카브");
	ScavTrap *bb;

	bb = new ScavTrap;
	aa.rangedAttack("hyeonkim");
	aa.meleeAttack("hihi");
	aa.takeDamage(40);
	aa.takeDamage(30);
	aa.takeDamage(90);
	aa.takeDamage(30);
	aa.beRepaired(150);

	delete bb;
	aa.challengeNewcomer();
	aa.challengeNewcomer();
	aa.challengeNewcomer();
	aa.challengeNewcomer();
	aa.challengeNewcomer();

	ClapTrap aaa("클랩");
	ClapTrap *bbb;

	bbb = new ClapTrap;
	aaa.rangedAttack("hyeonkim");
	aaa.meleeAttack("hihi");
	aaa.takeDamage(40);
	aaa.takeDamage(30);
	aaa.takeDamage(90);
	delete bbb;
	aaa.takeDamage(30);
	aaa.beRepaired(150);

	return 0;
}
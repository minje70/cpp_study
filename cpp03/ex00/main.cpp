#include "FragTrap.hpp"

int main()
{
	FragTrap a("mijeong");
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
}
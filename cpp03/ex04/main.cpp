#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap	super;
	NinjaTrap	*ninja;
	SuperTrap	super2("mijeong");

	super2.putStatus();
	ninja = &super;
	super.meleeAttack("mijeong");
	super.rangedAttack("mijeong");
	super.vaulthunter_dot_exe("mijeong");
	super.ninjaShoebox(*ninja);
	return 0;
}
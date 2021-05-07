#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &from)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = from;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine		&TacticalMarine::operator=(const TacticalMarine &rvalue)
{
	if (this != &rvalue)
		*this = rvalue;
	return *this;
}

ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine *result = new TacticalMarine(*this);
	return result;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

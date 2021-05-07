#include "Peon2.hpp"

Peon2::Peon2(std::string name): Victim(name)
{
	std::cout << "Zog zog22." << std::endl;
}

Peon2::Peon2(const Peon2 &from): Victim(from)
{
	std::cout << "Zog zog22." << std::endl;
}

Peon2::~Peon2()
{
	std::cout << "Bleuark...22" << std::endl;
}

Peon2		&Peon2::operator=(const Peon2 &rvalue)
{
	if (&rvalue != this)
		Victim::operator=(rvalue);
	return *this;
}

void	Peon2::getPolymorphed() const
{
	std::cout << _name << " has been turned into a fish!" << std::endl;
}

std::ostream& operator << (std::ostream& out, const Peon2& peon)
{
	return out << "I'm " << peon.getName() << " and I like fish!" << std::endl;
}
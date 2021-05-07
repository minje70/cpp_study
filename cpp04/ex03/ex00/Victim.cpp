#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string name)
{
	_name = name;
	std::cout << "some random victim called " << _name << " just appeared!" << std::endl;
}
Victim::Victim(const Victim& victim)
{
	_name = victim.getName();
	std::cout << "some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->getName() << " just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator = (const Victim& victim)
{
	_name = victim.getName();
	return *this;
}

std::string Victim::getName() const
{
	return _name;
}

void	Victim::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator << (std::ostream& out, const Victim& victim)
{
	return out << "I'm " << victim.getName() << " and I like otters!" << std::endl;
}

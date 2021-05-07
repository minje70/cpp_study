#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& sorcerer)
{
	*this = sorcerer;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead, Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator = (const Sorcerer& sorcerer)
{
	if (&sorcerer != this)
	{
		_name = sorcerer.getName();
		_title = sorcerer.getTitle();
	}
	return *this;
}

std::string	Sorcerer::getName() const
{
	return _name;
}

std::string	Sorcerer::getTitle() const
{
	return _title;
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream& operator << (std::ostream &out, const Sorcerer &sorcerer)
{
	return out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
			<< ", and i like ponies!" << std::endl;
}
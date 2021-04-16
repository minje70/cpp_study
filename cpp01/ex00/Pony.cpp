#include "Pony.hpp"

Pony::Pony(/* args */)
{
}

Pony::~Pony()
{
}

std::string	Pony::GetName()
{
	return (this->name);
}
int			Pony::GetAge()
{
	return (this->age);
}

void	Pony::SetName(std::string name)
{
	this->name = name;
}

void	Pony::SetAge(int age)
{
	this->age = age;
}
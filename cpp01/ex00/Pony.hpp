#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony
{
private:
	std::string	name;
	int			age;
public:
	Pony(/* args */);
	~Pony();
	std::string	GetName();
	int			GetAge();

	void		SetName(std::string name);
	void		SetAge(int age);
};

#endif
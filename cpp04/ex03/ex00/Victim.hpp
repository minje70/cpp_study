#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
private:
	Victim();
protected:
	std::string _name;
public:
	Victim(std::string name);
	Victim(const Victim& victim);
	~Victim();
	Victim& operator = (const Victim& victim);

	std::string	getName() const;
	virtual void	getPolymorphed() const;
};

std::ostream& operator << (std::ostream& out, const Victim& victim);

#endif
#ifndef PEON2_HPP
# define PEON2_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon2: public Victim
{
private:
	Peon2();
public:
	Peon2(std::string name);
	Peon2(const Peon2 &from);
	~Peon2();
	Peon2	&operator=(const Peon2 &rvalue);
	void		getPolymorphed() const;
};

std::ostream& operator << (std::ostream& out, const Peon2& peon2);

#endif
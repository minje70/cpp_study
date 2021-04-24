#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon: public Victim
{
private:

public:
	Peon();
	Peon(std::string name);
	Peon(const Peon& peon);
	~Peon();

	Peon& operator = (const Peon& peon);
	void		getPolymorphed() const;
};

std::ostream& operator << (std::ostream& out, const Peon& peon);

#endif

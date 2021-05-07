#ifndef TacticalMarine_HPP
# define TacticalMarine_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
private:

public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &from);
	~TacticalMarine();
	TacticalMarine	&operator=(const TacticalMarine &rvalue);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
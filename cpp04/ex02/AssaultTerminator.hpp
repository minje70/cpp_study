#ifndef AssaultTerminator_HPP
# define AssaultTerminator_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &from);
	~AssaultTerminator();
	AssaultTerminator	&operator=(const AssaultTerminator &rvalue);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
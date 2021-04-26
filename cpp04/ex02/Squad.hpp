#ifndef Squad_HPP
# define Squad_HPP

#include "ISquad.hpp"

class Squad: public ISquad
{
private:

public:
	Squad();
	Squad(const Squad &from);
	~Squad();
	Squad	&operator=(const Squad &rvalue);

	int				getCount() const;
	ISpaceMarine*	getUnit(int unit) const;
	int				push(ISpaceMarine* iSpaceMarine);
};

#endif
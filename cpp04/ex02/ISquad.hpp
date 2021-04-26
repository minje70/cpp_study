#ifndef ISquad_HPP
# define ISquad_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{
private:
protected:
	ISquad();
	int				_unitCount;
	ISpaceMarine	**_iSpaceMarine;
public:
	ISquad(const ISquad &from);
	virtual ~ISquad();

	ISquad	&operator=(const ISquad &rvalue);

	virtual int				getCount() const = 0;
	virtual ISpaceMarine*	getUnit(int index) const = 0;
	virtual int				push(ISpaceMarine* iSpaceMarine) = 0;
};

#endif

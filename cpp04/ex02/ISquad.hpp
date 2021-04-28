#ifndef ISquad_HPP
# define ISquad_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{
private:
protected:
	int				_unitCount;
	ISpaceMarine	**_iSpaceMarine;
public:
	virtual ~ISquad() {}

	virtual int				getCount() const = 0;
	virtual ISpaceMarine*	getUnit(int index) const = 0;
	virtual int				push(ISpaceMarine* iSpaceMarine) = 0;
};

#endif

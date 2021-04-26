#ifndef ISpaceMarine_HPP
# define ISpaceMarine_HPP

#include <iostream>
#include <string>

class ISpaceMarine
{
private:

public:
	ISpaceMarine();
	ISpaceMarine(const ISpaceMarine &from);
	virtual ~ISpaceMarine();
	ISpaceMarine	&operator=(const ISpaceMarine &rvalue);

	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};

#endif
#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
private:
public:
	PowerFist();
	PowerFist(const PowerFist& powerFist);
	~PowerFist();

	PowerFist& operator = (const PowerFist& powerFist);
	void	attack() const;
};

#endif
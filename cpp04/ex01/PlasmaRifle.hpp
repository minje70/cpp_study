#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
private:
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle& plasma);
	~PlasmaRifle();

	PlasmaRifle& operator = (const PlasmaRifle& plasma);
	void	attack() const;
};

#endif
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& plasma): AWeapon(plasma)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle& PlasmaRifle::operator = (const PlasmaRifle& plasma)
{
	AWeapon::operator= (plasma);
	return *this;
}
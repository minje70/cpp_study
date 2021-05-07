#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(const std::string& name, int apcost, int damage)
{
	_name = name;
	_AP = apcost;
	_damage = damage;
}

AWeapon::AWeapon(const AWeapon& weapon)
{
	_name = weapon.getName();
	_AP = weapon.getAPCost();
	_damage = weapon.getDamage();
}

AWeapon::~AWeapon()
{

}

AWeapon& AWeapon::operator = (const AWeapon& aweapon)
{
	_name = aweapon.getName();
	_AP = aweapon.getAPCost();
	_damage = aweapon.getDamage();
	return *this;
}

std::string	AWeapon::getName() const
{
	return _name;
}

int		AWeapon::getAPCost() const
{
	return _AP;
}

int		AWeapon::getDamage() const
{
	return _damage;
}

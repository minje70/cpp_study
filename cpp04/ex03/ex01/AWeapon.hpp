#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
private:
	std::string	_name;
	int			_AP;
	int			_damage;
	AWeapon();
public:
	AWeapon(const std::string& name, int apcost, int damage);
	AWeapon(const AWeapon& weapon);
	virtual ~AWeapon();

	AWeapon& operator = (const AWeapon& aweapon);

	std::string	getName() const;
	int		getAPCost() const;
	int		getDamage() const;
	virtual void	attack() const = 0;
};

#endif
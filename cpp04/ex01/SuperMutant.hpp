#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
private:

public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(const SuperMutant& superMutant);

	SuperMutant& operator = (const SuperMutant& superMutant);

	void	takeDamage(int damage);
};

#endif
#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
private:

public:
	RadScorpion();
	~RadScorpion();
	RadScorpion(const RadScorpion& radScorpion);

	RadScorpion& operator = (const RadScorpion& radScorpion);

	void	takeDamage(int damage);
};

#endif
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_value;
	static int const	_fractionalBit = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	// 복사 생성자. for 깊은 복사.
	Fixed(const Fixed &cv);
	~Fixed();
	Fixed	&operator = (const Fixed &fixed);
	float	toFloat() const;
	int		toInt() const;
	int		getRawBits() const;
	void	setRawBits(int const raw);
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_value;
	static int const	_fractionalBit = 8;
public:
	Fixed();
	// 복사 생성자. for 깊은 복사.
	Fixed(const Fixed &cv);
	~Fixed();
	Fixed	&operator = (const Fixed &fixed);
	int		getRawBits() const;
	void	setRawBits(int const raw);
};

#endif

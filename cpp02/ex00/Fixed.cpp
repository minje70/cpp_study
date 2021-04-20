#include "Fixed.hpp"

Fixed::Fixed()
{
	this->integer = 0;
}

Fixed::Fixed(const Fixed& cv)
{
	this->integer = cv.integer;
}

Fixed::~Fixed()
{
}

int		Fixed::getRawBits() const
{
	return this->fractionalBit;
}
void	Fixed::setRawBits(int const raw)
{

}
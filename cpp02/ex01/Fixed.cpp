#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_value = value << _fractionalBit;
}

Fixed::Fixed(float value)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _fractionalBit));
}

Fixed::Fixed(const Fixed& cv)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cv;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator = (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = fixed.getRawBits();
	return *this;
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
	return out << fixed.toFloat();
}

int		Fixed::getRawBits() const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int		Fixed::toInt() const
{
	return _value >> _fractionalBit;
}

float	Fixed::toFloat() const
{
	return (float)_value / (1 << _fractionalBit);
}

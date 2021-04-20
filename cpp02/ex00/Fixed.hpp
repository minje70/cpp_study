#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int					integer;
	static int const	fractionalBit = 8;
public:
	Fixed();
	// 복사 생성자. for 깊은 복사.
	Fixed(const Fixed& cv);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);
};

#endif
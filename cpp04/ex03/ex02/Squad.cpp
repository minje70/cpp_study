#include "Squad.hpp"

Squad::Squad()
{
	_unitCount = 0;
	_iSpaceMarine = NULL;
}

Squad::Squad(const Squad &from)
{
	*this = from;

	_iSpaceMarine = new ISpaceMarine*[from.getCount()];
	for (int i = 0; i < _unitCount; i++)
	{
		_iSpaceMarine[i] = from._iSpaceMarine[i]->clone();
	}
}

Squad::~Squad()
{
	for (int i = 0; i < _unitCount; i++)
	{
		delete _iSpaceMarine[i];
	}
	delete[] _iSpaceMarine;
}

Squad&		Squad::operator=(const Squad &rvalue)
{
	this->_unitCount = rvalue.getCount();

	_iSpaceMarine = new ISpaceMarine*[rvalue.getCount()];
	for (int i = 0; i < _unitCount; i++)
	{
		_iSpaceMarine[i] = rvalue._iSpaceMarine[i]->clone();
	}
	return *this;
}

int			Squad::getCount() const
{
	return _unitCount;
}

ISpaceMarine*	Squad::getUnit(int index) const
{
	return _iSpaceMarine[index];
}

int				Squad::push(ISpaceMarine* iSpaceMarine)
{
	ISpaceMarine	**tmp;

	tmp = _iSpaceMarine;
	_iSpaceMarine = new ISpaceMarine *[_unitCount + 1];
	for (int i = 0; i < _unitCount; i++)
	{
		_iSpaceMarine[i] = tmp[i];
	}
	_iSpaceMarine[_unitCount] = iSpaceMarine;
	delete[] tmp;
	_unitCount++;
	return _unitCount;
}

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		_memory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &from)
{
	for (int i = 0; i < 4; i++)
	{
		if (from._memory[i] == NULL)
			_memory[i] = NULL;
		else
			_memory[i] = from._memory[i];
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete _memory[i];
		_memory[i] = NULL;
	}
}

MateriaSource		&MateriaSource::operator=(const MateriaSource &rvalue)
{
	if (&rvalue != this)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rvalue._memory[i] == NULL)
				_memory[i] = NULL;
			else
				_memory[i] = rvalue._memory[i];
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_memory[i] == NULL)
		{
			_memory[i] = materia;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria	*result;
	if (type == "ice")
		result = new Ice();
	else if (type == "cure")
		result = new Cure();
	else
		result = 0;
	return result;
}

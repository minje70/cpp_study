#ifndef MateriaSource_HPP
# define MateriaSource_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*_memory[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &from);
	~MateriaSource();
	MateriaSource	&operator=(const MateriaSource &rvalue);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
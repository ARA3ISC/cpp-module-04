#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& obj);
		MateriaSource& operator=(const MateriaSource& obj);
		virtual ~MateriaSource();


		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);


};

#endif

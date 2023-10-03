#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];
		// int counter
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& obj);
		MateriaSource& operator=(const MateriaSource& obj);
		virtual ~MateriaSource();


		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);


};

#endif

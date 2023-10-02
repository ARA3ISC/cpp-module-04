#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& obj);
		Cure& operator=(const Cure& obj);
		virtual ~Cure();
		void use(ICharacter& target);
		virtual AMateria* clone() const;

};

#endif

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& obj);
	Ice& operator=(const Ice& obj);
	virtual ~Ice();
	void use(ICharacter& target);
	virtual AMateria* clone() const;

};

#endif

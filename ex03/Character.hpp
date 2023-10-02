#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
class AMateria;
#include <iostream>

class Character : public ICharacter
{
	private:
		std::string const _name;
		AMateria *slots[4];
	public:
		/* Canonical form*/
		Character();
		Character(std::string const& name);
		Character(const Character& obj);
		Character& operator=(const Character& obj);
		virtual ~Character();


		/* Override ICharacter virtual funcs*/
		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif

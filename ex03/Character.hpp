#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string const name;
	public:
		Character();

		virtual ~Character();
};

#endif

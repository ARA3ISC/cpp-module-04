#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# define RED "\033[31m"
# define GREEN "\033[92m"
# define RESET "\033[0m"
# define CYAN "\033[96m"

class ICharacter;

class AMateria
{
	protected:
		std::string const type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria& obj);
		AMateria& operator=(const AMateria& obj);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual ~AMateria();

		virtual void use(ICharacter& target);
};

#endif

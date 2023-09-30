#ifndef A_animal_HPP
# define A_animal_HPP

# include <iostream>

class A_animal
{
	protected:
		std::string _type;
	public:
		A_animal();
		A_animal(const A_animal& obj);
		A_animal& operator=(const A_animal& obj);
		virtual ~A_animal();

		virtual void makeSound() const = 0;
		const std::string& getType() const;
};

#endif

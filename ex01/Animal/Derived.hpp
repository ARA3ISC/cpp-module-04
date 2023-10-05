#ifndef DERIVED_HPP
# define DERIVED_HPP

# include "Animal.hpp"
# include "../Brain/Brain.hpp"

class Dog: public Animal
{
	private:
	public:
		Brain* _brain;
		Dog();
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		virtual ~Dog();
		void makeSound() const;
};

class Cat: public Animal
{
	private:
	public:
		Brain* _brain;
		Cat();
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		virtual ~Cat();
		void makeSound() const;
};

#endif

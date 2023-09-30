#ifndef DERIVED_HPP
# define DERIVED_HPP

# include "A_animal.hpp"
# include "../Brain/Brain.hpp"

class Dog: public A_animal
{
	private:
		Brain* _brain;
	public:
		Dog();
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		virtual ~Dog();
		void makeSound() const;
};

class Cat: public A_animal
{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		virtual ~Cat();
		void makeSound() const;
};

#endif

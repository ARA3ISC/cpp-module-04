#ifndef DERIVED_HPP
# define DERIVED_HPP

# include "Animal.hpp"
# include "../Brain/Brain.hpp"

class Dog: public Animal
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

class Cat: public Animal
{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		virtual ~Cat();
		void makeSound() const;

		// void printIdea()
		// {
		// 	std::cout << this->brain->ideas[0] << std::endl;
		// }
};

#endif

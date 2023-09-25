#ifndef DERIVED_HPP
# define DERIVED_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		virtual ~Dog();
		void makeSound() const;
		const std::string& getType();

};

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		virtual ~Cat();
		void makeSound() const;
		const std::string& getType();


};

#endif

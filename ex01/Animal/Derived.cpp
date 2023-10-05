/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Derived.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:41:40 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/05 13:08:12 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Derived.hpp"

// dog.cpp

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& obj): Animal(obj)
{
	this->_type = obj._type;

	this->_brain = new Brain();
	*(this->_brain) = *(obj._brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	std::cout << "Dog copy assignment operator called" << std::endl;
	*(this->_brain) = *(obj._brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "A dog is barking" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}


// cat.cpp

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& obj): Animal(obj)
{
	this->_type = obj._type;
	this->_brain = new Brain();
	*(this->_brain) = *(obj._brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	if (this == &obj)
		return (*this);

	this->_type = obj._type;
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->_brain = new Brain();
	*(this->_brain) = *(obj._brain);
	return (*this);
}


void Cat::makeSound() const
{
	std::cout << "A cat is Meowing" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

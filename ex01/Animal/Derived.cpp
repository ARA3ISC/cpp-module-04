/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Derived.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:41:40 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/25 18:16:00 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Derived.hpp"

// dog.cpp

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& obj): Animal(obj)
{
	this->type = obj.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
	if (this == &obj)
		return (*this);
	this->type = obj.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "A dog is barking" << std::endl;
}

// cat.cpp

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& obj): Animal(obj)
{
	this->type = obj.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	if (this == &obj)
		return (*this);
	this->type = obj.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "A cat is Meowing" << std::endl;
}
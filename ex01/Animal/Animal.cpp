/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:23:04 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/29 18:04:13 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "unknown";
	std::cout << "Animal default constructor was called" << std::endl;
}

Animal::Animal(const Animal& obj): _type(obj._type)
{
	std::cout << "Animal copy constructor was called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
	if (this != &obj)
		this->_type = obj._type;
	std::cout << "Animal copy assignment operator was called" << std::endl;
	return (*this);
}


void Animal::makeSound() const
{
	std::cout << "Animal not precised" << std::endl;
}

const std::string& Animal::getType() const
{
	return this->_type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor was called" << std::endl;
}

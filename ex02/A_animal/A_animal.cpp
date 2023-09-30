/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:23:04 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/29 18:04:13 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_animal.hpp"

A_animal::A_animal()
{
	this->_type = "unknown";
	std::cout << "A_animal default constructor was called" << std::endl;
}

A_animal::A_animal(const A_animal& obj): _type(obj._type)
{
	std::cout << "A_animal copy constructor was called" << std::endl;
}

A_animal& A_animal::operator=(const A_animal& obj)
{
	if (this != &obj)
		this->_type = obj._type;
	std::cout << "A_animal copy assignment operator was called" << std::endl;
	return (*this);
}


void A_animal::makeSound() const
{
	std::cout << "A_animal not precised" << std::endl;
}

const std::string& A_animal::getType() const
{
	return this->_type;
}

A_animal::~A_animal()
{
	std::cout << "A_animal destructor was called" << std::endl;
}

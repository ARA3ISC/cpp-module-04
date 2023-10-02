/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:59:32 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/02 12:36:16 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &obj)
{
	(void)obj;
	return *this;
}


AMateria* Ice::clone() const
{
	AMateria *tmp = new Ice();

	return tmp;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}


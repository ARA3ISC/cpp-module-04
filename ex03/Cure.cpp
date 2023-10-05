/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:19:38 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/04 20:04:12 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &obj)
{
	(void)obj;
	return *this;
}


AMateria* Cure::clone() const
{
	AMateria *tmp = new Cure();
	return tmp;
}

void Cure::use(ICharacter& target)
{
	std::cout << CYAN << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

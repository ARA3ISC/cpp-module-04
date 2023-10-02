/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:15:05 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/02 12:41:35 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &_type): type(_type)
{
	std::cout << "AMateria parametrized called" << std::endl;
}

AMateria::AMateria(const AMateria &obj): type(obj.type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	(void)obj;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return this->type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}
void AMateria::use(ICharacter& target)
{
	(void)target;
}

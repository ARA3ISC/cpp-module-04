/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:58:11 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/02 17:10:52 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	*this = obj;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	if (this == &obj)
		return *this;
	*this = obj;
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;

}

/* override inherited pure virtual functions */

void MateriaSource::learnMateria(AMateria*)
{
	AMateria *tmp = ;

	tmp = new

}

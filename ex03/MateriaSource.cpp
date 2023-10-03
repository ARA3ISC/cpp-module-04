/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:58:11 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/03 15:58:34 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "MateriaSource constructor called" << std::endl;
}

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

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != NULL)
		{
			delete this->materia[i];
			this->materia[i] = NULL;
		}
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

/* override inherited pure virtual functions */

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == NULL)
		{
			this->materia[i] = m;
			return;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != NULL && this->materia[i]->getType() == type)
		return this->materia[i]->clone();
	}
	return 0;
}


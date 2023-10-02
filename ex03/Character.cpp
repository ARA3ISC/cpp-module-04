/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:36:47 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/02 16:36:34 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>
/* Canonical form*/

// Character::Character() : _name("unknown")
// {
// 	for (int i = 0; i < 4; i++)
// 		this->slots[i] = NULL;
// 	std::cout << "Character default constructor called" << std::endl;

// }

Character::Character(std::string const& name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character& obj): ICharacter(obj), _name(obj._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (obj.slots[i] != NULL)
		{
			// delete this->slots[i];
			this->slots[i] = obj.slots[i]->clone();
			(*this->slots[i]) = (*obj.slots[i]);
		}
		else
			this->slots[i] = NULL;
	}

	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& obj)
{
	if (this == &obj)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (obj.slots[i] != NULL)
		{
			// delete this->slots[i];
			this->slots[i] = obj.slots[i]->clone();
			(*this->slots[i]) = (*obj.slots[i]);
		}
		else
			this->slots[i] = NULL;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i])
			delete this->slots[i];
	}

	std::cout << "Character destructor called" << std::endl;
}

std::string const& Character::getName() const
{
	return this->_name;
}

/* override base class ICharacter virtual functions*/

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i] == NULL)
		{
			this->slots[i] = m->clone();
			std::cout<< GREEN << this->slots[i]->getType() << " equiped successfuly" << RESET << std::endl;
			return;
		}
	}
	std::cout << RED << "There is no space in inventory" << RESET << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || this->slots[idx] == NULL)
	{
		std::cout << RED << "Materia not found" << RESET << std::endl;
		// ! still leak when unequiping unexisting materia
		return;
	}
	std::cout << GREEN << this->slots[idx]->getType() <<   " unequiped successfuly" << RESET << std::endl;
	delete this->slots[idx];
	this->slots[idx] = NULL;

}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->slots[idx])
		this->slots[idx]->use(target);
	std::cout << RED << "Materia not found" << RESET << std::endl;
}

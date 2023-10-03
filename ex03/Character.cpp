/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:36:47 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/03 16:14:24 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>

/* Canonical form*/
Character::Character(std::string const& name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->slots[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->toDelete[i] = NULL;
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character& obj): ICharacter(obj), _name(obj._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (obj.slots[i] != NULL)
		{
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
		if (this->slots[i] != NULL)
			delete this->slots[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->toDelete[i] != NULL)
			delete this->toDelete[i];
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
			this->slots[i] = m;
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
		return;
	}
	std::cout << GREEN << this->slots[idx]->getType() <<   " unequiped successfuly" << RESET << std::endl;
	this->toDelete[idx] = this->slots[idx];
	this->slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->slots[idx] != NULL)
		this->slots[idx]->use(target);
	else
		std::cout << RED << "Materia not found" << RESET << std::endl;
}

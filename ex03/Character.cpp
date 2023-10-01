/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:36:47 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/01 17:33:08 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Canonical form*/


Character::Character() : _name("unknown")
{
	for (int i = 0; i < 4; i++)
		this->slots[i] = nullptr;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const& name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->slots[i] = nullptr;
}

Character::Character(const Character& obj): ICharacter(obj)
{
	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& obj)
{
	(void)obj;
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

/* override base class ICharacter virtual functions*/

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i] == nullptr)
		{
			this->slots[i] == m->clone();
			std::cout << GREEN << "Materia equiped successfuly" << RESET << std::endl;
			return;
		}
	}
	std::cout << RED << "There is no space in inventory" << RESET << std::endl;
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == 4)
		{
			delete this->slots[i];
			this->slots[i] == nullptr;
			std::cout << GREEN << "Materia unequiped successfuly" << RESET << std::endl;
			return;
		}
	}
	std::cout << RED << "Materia not found" << RESET << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	this->slots[idx] == this->slots[idx].clone();
}

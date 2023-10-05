/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:25:23 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/05 15:29:08 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

// int main()
// {
// 	ICharacter *player = new Character("Kratos");

// 	player->equip(new Ice());
// 	player->equip(new Cure());
// 	player->equip(new Cure());
// 	player->equip(new Ice());


// 	player->equip(new Cure()); // must print Full inventory

// 	player->use(0, *player);
// 	player->use(1, *player);

// 	player->unequip(0);
// 	player->unequip(1);
// 	player->unequip(2);
// 	player->unequip(3);
// 	player->unequip(4); // materia not found

// 	delete player;
// }

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");


	AMateria* tmp;
	tmp = src->createMateria("ice");

	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	// me->unequip(0);
	// me->unequip(1);

	delete bob;
	delete me;
	delete src;
}


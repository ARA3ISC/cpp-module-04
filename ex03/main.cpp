/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:25:23 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/02 15:17:24 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	Character player("Kratos");
	AMateria* kabus = new Ice();
	AMateria* medkit = new Cure();

	player.equip(kabus);
	player.equip(medkit);

	player.use(0, player);
	player.use(1, player);

	player.unequip(0);
	player.unequip(1);

	delete kabus;
}

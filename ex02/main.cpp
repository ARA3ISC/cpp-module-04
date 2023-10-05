/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:15:54 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/04 20:01:51 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_animal/Derived.hpp"
#include "WrongAnimal/WrongCat.hpp"

int main()
{
	A_animal *dog = new Cat();

	dog->makeSound();

	delete dog;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:15:54 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/30 12:21:46 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_animal/Derived.hpp"
#include "WrongAnimal/WrongCat.hpp"

int main()
{
	A_animal *dog = new Dog();

	dog->makeSound();

	delete dog;
}


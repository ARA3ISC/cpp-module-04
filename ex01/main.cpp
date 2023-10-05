/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:15:54 by maneddam          #+#    #+#             */
/*   Updated: 2023/10/05 13:08:56 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Derived.hpp"
#include "WrongAnimal/WrongCat.hpp"

int main()
{
	Animal *arr[4];

	for (size_t i = 0; i < 2; i++)
	{
		arr[i] = new Dog();
	}
	for (size_t i = 2; i < 4; i++)
	{
		arr[i] = new Cat();
	}
 	// delete animal objects
	for (size_t i = 0; i < 4; i++)
	{
		delete arr[i];
	}
}




/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:15:54 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/28 16:38:41 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Derived.hpp"
#include "WrongAnimal/WrongCat.hpp"

int main()
{
	Animal *arr[6];

	for (size_t i = 0; i < 3; i++)
	{
		arr[i] = new Dog();
	}

	arr[0] = new Dog();


	for (size_t i = 3; i < 6; i++)
	{
		arr[i] = new Cat();
	}

	// delete animal objects

	for (size_t i = 0; i < 6; i++)
	{
		delete arr[i];
	}

}

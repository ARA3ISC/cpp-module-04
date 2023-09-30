/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:15:54 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/30 10:42:58 by maneddam         ###   ########.fr       */
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

// testst for deep and shallow copy

// int main()
// {
// 	Dog dog;

// 	std::cout << std::endl;
// 	std::cout << "*** " << dog.brain->ideas[0] << std::endl;
// 	std::cout << std::endl;


// 	Dog dwiyeg;

// 	dwiyeg = dog;
// 	dwiyeg.brain->ideas[0] = "another one";

// 	std::cout << std::endl;
// 	std::cout << " --> " << dog.brain->ideas[0] << std::endl;
// 	std::cout << std::endl;

// 	std::cout << std::endl;
// }


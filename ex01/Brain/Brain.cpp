/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:55:26 by maneddam          #+#    #+#             */
/*   Updated: 2023/09/28 16:28:43 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = "Idea";
	}

	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = obj.ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
	if (this == &obj)
		return (*this);
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = obj.ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

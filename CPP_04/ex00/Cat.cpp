/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Class: Cat - Default Construtor called with default (Cat)" \
		<< std::endl;
	this->_type = "Cat";
	return;
}

Cat::Cat( const Cat& copy )
{
	std::cout << "Class: Cat - Copy Construtor called by Cat type: " \
		<< copy._type << std::endl;
	*this = copy;
	return;
}

Cat	&Cat::operator=( const Cat &src )
{
	std::cout << "Class: Cat - Copy assignment operator called by Cat type: " \
		<< src._type << std::endl;
	this->_type = src._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Class: Cat - Deconstructor called by " << this->_type \
		<< std::endl;
	return;
}

void	Cat::makeSound( void )const
{
	std::cout << this->_type << " makes miiiiiAAu!!" << std::endl;
}

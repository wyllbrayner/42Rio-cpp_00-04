/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Class: Animal - Default Construtor called with default" \
		<< std::endl;
	this->_type = "default";
	return;
}

Animal::Animal( const Animal& copy )
{
	std::cout << "Class: Animal - Copy Construtor called by Animal type: " \
		<< copy._type << std::endl;
	*this = copy;
	return;
}

Animal	&Animal::operator=( const Animal &src )
{
	std::cout << "Class: Animal - Copy assignment operator called by Animal"
	       " type: " << src._type << std::endl;
	this->_type = src._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Class: Animal - Deconstructor called by " << this->_type \
		<< std::endl;
	return;
}

std::string	Animal::getType( void )const
{
	return (this->_type);
}

void		Animal::makeSound( void )const
{
	std::cout << "The " << this->_type << " animal doesn't make any type of"\
		<< " sound" << std::endl;
}

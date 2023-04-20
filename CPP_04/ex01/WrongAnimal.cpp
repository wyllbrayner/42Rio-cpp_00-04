/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Class: WrongAnimal - Default Construtor called with " \
		<< "WrongAnimal" << std::endl;
	this->_type = "default";
	return;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy )
{
	std::cout << "Class: WrongAnimal - Copy Construtor called by WrongAnimal" \
		<< " type: " << copy._type << std::endl;
	*this = copy;
	return;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &src )
{
	std::cout << "Class: WrongAnimal - Copy assignment operator called by " \
		<< "WrongAnimal type: " << src._type << std::endl;
	this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Class: WrongAnimal - Deconstructor called by " \
		<< this->_type << std::endl;
	return;
}

std::string	WrongAnimal::getType( void )const
{
	return (this->_type);
}

void		WrongAnimal::makeSound( void )const
{
	std::cout << "The " << this->_type << " wrong animal doesn't make any " \
		<< "type of" << " sound" << std::endl;
}

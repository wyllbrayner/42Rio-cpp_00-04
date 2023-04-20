/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Class: AAnimal - Default Construtor called with default" \
		<< std::endl;
	this->_type = "default";
	return;
}

AAnimal::AAnimal( const AAnimal& copy )
{
	std::cout << "Class: AAnimal - Copy Construtor called by AAnimal type: " \
		<< copy._type << std::endl;
	*this = copy;
	return;
}

AAnimal	&AAnimal::operator=( const AAnimal &src )
{
	std::cout << "Class: AAnimal - Copy assignment operator called by AAnimal" \
	       " type: " << src._type << std::endl;
	this->_type = src._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Class: AAnimal - Deconstructor called by " << this->_type \
		<< std::endl;
	return;
}

std::string	AAnimal::getType( void )const
{
	return (this->_type);
}
/*
void		AAnimal::makeSound( void )const
{
	std::cout << "The " << this->_type << " animal doesn't make any type of"\
		<< " sound" << std::endl;
}
*/

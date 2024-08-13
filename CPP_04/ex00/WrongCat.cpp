/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Class: WrongCat - Default Construtor called with default " \
		<< "(Cat)" << std::endl;
	this->_type = "Cat";
	return;
}

WrongCat::WrongCat( const WrongCat& copy ) :  WrongAnimal(copy)
{
	std::cout << "Class: WrongCat - Copy Construtor called by WrongCat "\
		<< "type: " << copy._type << std::endl;
	*this = copy;
	return;
}

WrongCat	&WrongCat::operator=( const WrongCat &src )
{
	std::cout << "Class: WrongCat - Copy assignment operator called by " \
		<< "WrongCat type: " << src._type << std::endl;
	this->_type = src._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Class: WrongCat - Deconstructor called by " << this->_type \
		<< std::endl;
	return;
}

void	WrongCat::makeSound( void )const
{
	std::cout << this->_type << " makes miiiiigAAuHHHH!!" << std::endl;
}

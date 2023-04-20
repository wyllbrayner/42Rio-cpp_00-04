/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Class: Dog - Default Construtor called with default (Dog)" \
		<< std::endl;
	this->_type = "Dog";
	this->_Brain = new Brain();
	return;
}

Dog::Dog( const Dog& copy )
{
	std::cout << "Class: Dog - Copy Construtor called by Dog type: " \
		<< copy._type << std::endl;
	*this = copy;
	return;
}

Dog	&Dog::operator=( const Dog &src )
{
	std::cout << "Class: Dog - Copy assignment operator called by Dog type: " \
		<< src._type << std::endl;
	this->_type = src._type;
	this->_Brain = new Brain();
	*this->_Brain = *src._Brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Class: Dog - Deconstructor called by " << this->_type \
		<< std::endl;
	delete this->_Brain;
	return;
}

void	Dog::makeSound( void )const
{
	std::cout << this->_type << " makes AU, AU!!" << std::endl;
}

void	Dog::getIdeas( void )const
{
	int	i;

	i = 0;
	while (i < 100)
	{
		std::cout << "Idea number "<< i << " from " << this->_type \
			<< " : " << this->_Brain->getIdea(i) << std::endl;
		i++;
	}
}

void	Dog::setIdea( int i, std::string idea )
{
	this->_Brain->setIdea(i, idea);
}

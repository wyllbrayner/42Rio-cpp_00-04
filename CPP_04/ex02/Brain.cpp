/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Class: Brain - Default Construtor called" << std::endl;
	return;
}

Brain::Brain( const Brain& copy )
{
	std::cout << "Class: Brain - Copy Construtor called" << std::endl;
	*this = copy;
	return;
}

Brain	&Brain::operator=( const Brain &src )
{
	int	i;

	std::cout << "Class: Brain - Copy assignment operator called" \
		<< std::endl;
	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = src._ideas[i];
		i++;
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Class: Brain - Deconstructor called" << std::endl;
	return;
}

const std::string	Brain::getIdea( int i )const
{
	if ((i >=0) && (i < 100))
	{
		return (this->_ideas[i]);
	}
	else
		return (NULL);
}

void	Brain::setIdea( int i, std::string idea )
{
	if ((i >=0) && (i < 100))
		this->_ideas[i] = idea;
	else
		std::cout << "Please, select a number between 0 and 99" \
			<< std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string s)
{
	this->_name = s;
	return;
}

Zombie::~Zombie()
{
	std::cout << "The zombie " << this->_name << " finally died completely." \
	<< std::endl;
	return;
}

void Zombie::announce( void ) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
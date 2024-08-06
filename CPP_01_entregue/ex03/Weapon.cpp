/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon)
{
	this->_type = weapon;
	return;
}

Weapon::~Weapon()
{
	std::cout << this->getType() << " dropped to the floor and broke." \
		<< std::endl;
	return;
}

const std::string Weapon::getType()
{
	return (this->_type);
}

void Weapon::setType(const std::string &weapon)
{
	this->_type = weapon;
}
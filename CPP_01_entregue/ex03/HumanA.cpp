/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
	this->_name = name;
	std::cout << this->_name << " joined the battlefield with their " \
		<< this->_weapon.getType() << " to fight." << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " died." << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " \
	<< this->_weapon.getType() << "." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: Default Construtor called with name default" \
		<< std::endl;
	this->_name = "default";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return;
}

ScavTrap::ScavTrap( std::string name )
{
	std::cout << "ScavTrap: Default Construtor called with name " \
		<< name << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap(copy)
{
	std::cout << "ScavTrap: Copy Construtor called by ScavTrap name: " \
		<< copy._name << std::endl;
	*this = copy;
	return;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &src )
{
	std::cout << "ScavTrap: Copy assignment operator called by ScavTrap name: " \
		<< src._name << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Deconstructor called by " << this->_name \
		<< std::endl;
	return;
}

void	ScavTrap::guardGate( void )
{
	if (this->_hit_points > 0)
	{
		std::cout << "ScavTrap " << this->_name \
			<< "is now in Gate keeper mode" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name \
			<< " He doesn't have enough "\
		"hit points to keep the game going." << std::endl;
}

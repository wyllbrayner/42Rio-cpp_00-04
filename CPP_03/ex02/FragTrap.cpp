/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap: Default Construtor called with name default" \
		<< std::endl;
	this->_name = "default";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	return;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "FragTrap: Default Construtor called with name " << name \
		<< std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	return;
}

FragTrap::FragTrap( const FragTrap& copy ) : ClapTrap(copy)
{
	std::cout << "FragTrap: Copy Construtor called by FragTrap name: " \
		<< copy._name << std::endl;
	*this = copy;
	return;
}

FragTrap	&FragTrap::operator=( const FragTrap &src )
{
	std::cout << "FragTrap: Copy assignment operator called by FragTrap name: " \
		<< src._name << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Deconstructor called by " << this->_name << std::endl;
	return;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hit_points > 0)
	{
		std::cout << "FragTrap: gave a High Five Guys" << std::endl;
	}
	else
		std::cout << "FragTrap: " << this->_name << " doesn't have enough "\
			"hit points to keep the game going." << std::endl;
}

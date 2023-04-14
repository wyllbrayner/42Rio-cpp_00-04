/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Construtor called" << std::endl;
	this->_name = "default";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	return;
}

ClapTrap::ClapTrap( const ClapTrap& copy )
{
	std::cout << "Copy Construtor called" << std::endl;
	*this = copy;
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src )
{
	std::cout << "Copy assignment operator callec" << std::endl;
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "Default Construtor called with name" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called" << std::endl;
	return;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points > 0)
	{
		if (this->_energy_points > 0)
		{
			std::cout << "ClapTrap " << this->_name << " attacks " << target \
			<< ", causing " << this->_attack_damage << " points of damage!" \
			<< std::endl;
			this->_energy_points--;
		}
		else
		{
			std::cout << "ClapTrap " << this->_name << " does not have " \
			<< "enough energy points to perform the attack." << std::endl;
		}
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		if (this->_hit_points >= amount)
			this->_hit_points -= amount;
		else
			this->_hit_points = 0;
		std::cout << "ClapTrap " << this->_name << " was attacked and lost " \
		<< amount << " hit points, remaining " << this->_hit_points \
		<< " hit points." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		if (this->_energy_points > 0)
		{
			this->_energy_points--;
			this->_hit_points += amount;
			std::cout << "ClapTrap " << this->_name \
			<< " repaired itself and gained " << amount << " hit points" \
			<< " totaling " << this->_hit_points << " hit points." << std::endl;
		}
		else
		{
			std::cout << "ClapTrap " << this->_name  << " does not have" \
			<< " enough energy to repair himself and remains at " \
			<< this->_hit_points << " hit points." << std::endl;
		}
	}
}

std::string		ClapTrap::getName(void)const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void)const
{
	return (this->_hit_points);
}

unsigned int	ClapTrap::getEnergyPoints(void)const
{
	return (this->_energy_points);
}

unsigned int	ClapTrap::getAttackPoints(void)const
{
	return (this->_attack_damage);
}

void			ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void			ClapTrap::setHitPoints(unsigned int hp)
{
	this->_hit_points = hp;
}

void			ClapTrap::setEnergyPoints(unsigned int ep)
{
	this->_energy_points = ep;
}

void			ClapTrap::setAttackPoints(unsigned int ap)
{
	this->_attack_damage = ap;
}

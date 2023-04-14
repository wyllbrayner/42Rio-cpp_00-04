/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	std::string player1 = "Maria";
	std::string player2 = "João";
	std::string player3 = "Enemy1";

	ClapTrap 	j1(player1);
	ClapTrap 	j2;

	j2 = j1;
	j2.setName(player2);
	std::cout << "J1 | Name: " << j1.getName() << "\npoints: " << j1.getHitPoints() \
	<< "\nenergy: " << j1.getEnergyPoints() << "\nattack: " \
	<< j1.getAttackPoints() << std::endl;
	std::cout << "J2 | Name: " << j2.getName() << "\npoints: " << j2.getHitPoints() \
	<< "\nenergy: " << j2.getEnergyPoints() << "\nattack: " \
	<< j2.getAttackPoints() << std::endl;
	j1.attack(player3);
	j1.takeDamage(2);
	j1.beRepaired(8);
	return (0);
}
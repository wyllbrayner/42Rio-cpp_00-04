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

#include "ScavTrap.hpp"

int main( void )
{
	std::string player1 = "Maria";
	std::string player2 = "João";
	std::string player3 = "Enemy1";

	ScavTrap 	j1(player1);
	ClapTrap 	j2(player2);

	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.takeDamage(20);
	j1.takeDamage(20);
	j1.takeDamage(20);
	j1.takeDamage(20);
	j1.takeDamage(15);
	j1.beRepaired(10);
	j1.attack(player3);
	j1.takeDamage(4);
	j1.takeDamage(4);
	j1.takeDamage(4);
	j1.guardGate();
	j1.guardGate();
	return (0);
}
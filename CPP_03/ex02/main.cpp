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
#include "FragTrap.hpp"

int	main( void )
{
	std::string player1 = "Maria";
	std::string player2 = "João";
	std::string player3 = "Enemy1";

	FragTrap	j1(player1);
	ScavTrap 	j2;
	ClapTrap	j3(player2);

	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.takeDamage(30);
	j1.takeDamage(30);
	j1.takeDamage(30);
	j1.beRepaired(10);
	j1.attack(player3);
	j1.takeDamage(10);
	j1.highFivesGuys();
	j1.takeDamage(10);
	j1.takeDamage(10);
	j1.highFivesGuys();
	return (0);
}

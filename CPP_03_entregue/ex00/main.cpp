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

int	main( void )
{
	std::string player1 = "Maria";
	std::string player2 = "João";
	std::string player3 = "Enemy1";
	
	ClapTrap	j1(player1);
	ClapTrap	j2(player2);

	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.attack(player3);
	j1.takeDamage(2);
	j1.takeDamage(2);
	j1.takeDamage(2);
	j1.takeDamage(2);
	j1.beRepaired(8);
	j1.attack(player3);
	j1.takeDamage(2);
	j1.takeDamage(2);
	j1.takeDamage(2);
	j1.takeDamage(2);
	j1.takeDamage(2);
	j1.takeDamage(2);
	return (0);
}

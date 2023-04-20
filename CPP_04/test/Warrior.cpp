/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warrior.hpp"

Warrior::Warrior()
{
	std::cout << "Default Construtor from Warrior" << std::endl;
	return;
}

Warrior::~Warrior()
{
	std::cout << "Deconstructor from Warrior" << std::endl;
	return;
}

/*
void	Warrior::sayHello( std::string& target )
{
	std::cout << "F*** off  " << target << ", I don't like you !" << std::endl;
}
*/

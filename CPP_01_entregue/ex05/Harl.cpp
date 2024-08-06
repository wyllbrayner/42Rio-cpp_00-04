/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	return;
}

Harl::~Harl()
{
	return;
}

void	Harl::complain( std::string level )
{
	void	(Harl::*ptrf)(void);
	int		val;

	if (level.compare("debug") == 0)
		val = 0;
	else if (level.compare("info") == 0)
		val = 1;
	else if (level.compare("warning") == 0)
		val = 2;
	else if (level.compare("error") == 0)
		val = 3;
	else
		val = 4;
	switch (val)
	{
		case 0:
			ptrf = &Harl::debug;
			(this->*ptrf)();
			break ;
		case 1:
			ptrf = &Harl::info;
			(this->*ptrf)();
			break ;
		case 2:
			ptrf = &Harl::warning;
			(this->*ptrf)();
			break ;
		case 3:
			ptrf = &Harl::error;
			(this->*ptrf)();
			break ;
		default:
		{
			std::cout << "\n\n ========== **** ++++++++++ **** ========== " \
			<< std::endl;
			std::cout << "< " << level << " > option is not available." \
			<< std::endl;
		}
	}
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my"
	<<" 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl;
}

void	Harl::info( void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
	<<" You didn’t put enough bacon in my burger! If you did, I wouldn’t"
	<<" be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free." 
	<< " I’ve been coming for years whereas you started working here"
	<< " since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

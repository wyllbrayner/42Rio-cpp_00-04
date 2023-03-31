/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_fields_name[5] = 
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
	int	i;

	i = FirstName;
	while (i <= DarkestSecret)
	{
		this->_informations[i] = std::string();
		i++;
	}
	return;
}

/*
Contact::Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		this->_informations[i] = std::string();
	return;
}
*/

Contact::~Contact()
{
}

bool Contact::set_contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "Please enter the " << Contact::_fields_name[i] << ":\n+";
		while (!(std::getline(std::cin, this->_informations[i])) || this->_informations[i].length() == 0)
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
				std::exit(0);
			}
			else if (this->_informations[i].length() == 0)
			{
				this->_informations[i].clear();
				std::cout << "Empty contact information not allowed.";
			}
		}
	}
	std::cout << "Contact added sucessesfully." << std::endl;
	return (true);
}

void Contact::get_contact(int index) const
{
	int	i;

	i = FirstName;
	std::cout << "|" << std::setw(10) << index;
	while (i <= NickName)
	{
		std::cout << "|";
		if (this->_informations[i].length() > 10)
			std::cout << this->_informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_informations[i];
		i++;
	}
	std::cout << "|" << std::endl;
}

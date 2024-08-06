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

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_full = false;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::set_information(void)
{
	int		i;
	std::string	input;

	std::cout << "Contact # " << this->_index + 1 << std::endl;
	if (this->_full == false)
	{
		if (this->_contacts[this->_index].set_contact() == true)
		{
			if (this->_index == 7)
				this->_full = true;
			else
				this->_index++;
		}
	}
	else
	{
		i = 1;
		while (i < 8)
		{
			this->_contacts[i - 1] = this->_contacts[i];
			i++;
		}
		this->_contacts[this->_index].set_contact();
	}
}

void	PhoneBook::get_information() const
{
	int		i;
	int		index;
	std::string	input;

	if (this->_index == 0)
		std::cout << "You have no saved contacts." << std::endl;
	else
	{
		index = 0;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		while (index < 8)
		{
			this->_contacts[index].get_contact(index + 1);
			index++;
		}
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "Please tell me which contact I should show you. ";
		std::cout << "(0 to quit searching)" << std::endl;
		std::cout << "index: ";
		while (!(std::getline(std::cin, input)) || input.length() > 1 || \
				input.compare("0") < 0 || input.compare("8") > 0 || \
				(((std::atoi(input.c_str()) - 1) >= this->_index) && this->_full \
				 == false))
		{
			if (std::cin.eof())
			{
				std::cout << std::endl;
				std::exit(0);
			}
			else if (input.length() > 1 || input.compare("0") < 0 || \
					input.compare("8") > 0)
				std::cout << "Only digits in range of 1 to 8 are allowed.\n";
			else if (((std::atoi(input.c_str()) - 1) >= this->_index) \
					&& this->_full == false)
				std::cout << "You only have " << this->_index << " Contacts saved." << std::endl;
			std::cout << "Please tell me which contact I should show you. ";
			std::cout << "(0 to quit searching)" << std::endl;
			std::cout << "index: ";
		}
		index = std::atoi(input.c_str());
		if (index > 0)
			this->_contacts[index - 1].display_contact();
	}
}

void	PhoneBook::show_instruction(void)
{
	std::cout << "Enter an command [ADD, SEARCH, EXIT]:" << std::endl;
	std::cout << "> ";
}

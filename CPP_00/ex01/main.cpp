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
#include "Contact.hpp"

int main(void)
{
	PhoneBook	PhoneBook;
	bool		run;
	std::string	command;

	run = true;
	PhoneBook.show_instruction();
	std::getline(std::cin, command);
	while (run)
	{
		if (std::cin.eof())
			break ;
		else if (command == "ADD")
			PhoneBook.set_information();
		else if (command == "SEARCH")
			PhoneBook.get_information();
		else if (command == "EXIT")
		{
			run = false;
			break ;
		}
		PhoneBook.show_instruction();
		std::getline(std::cin, command);
	}
	if (run)
		std::cout << std::endl;
}

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
	bool		run = true;
	std::string	command;

	PhoneBook.show_instruction();
	std::cout << "\033[33m$>\033[0m";
	while (run && std::getline(std::cin, command))
	{
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exitting phonebook now." << std::endl;
			exit(0);
		}
		else if (command.compare("ADD") == 0)
			PhoneBook.set_information();
		else if (command.compare("SEARCH") == 0)
			PhoneBook.get_information();
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "\033[34mHope I served you well. \033[0m" << std::endl;
			run = false;
			continue ;
		}
		command.clear();
		PhoneBook.show_instruction();
		std::cout << "\033[33m$>\033[0m";
	}
	if (run)
	{
		std::cout << "You pressed ^D, exiting now." << command << std::endl
		<< "\033[34mHope i served you well. Good Bye.\033[0m" << std::endl;
	}

}
/*
int	main (void)
{
	std:: string	line;

	std::cout << "Choose one of the following options: [ADD, SEARCH, EXIT]: ";
	std::getline(std::cin, line);
	while (1)
	{
		std::cout << "comando: " << line << std::endl;
		if (std::cin.eof())
		{
			std::cout << "apertou ^D" << std::endl;
			break ;
		}
		else if (line == "ADD")
			std::cout << "O comando foi ADD" << std::endl;
		else if (line == "SEARCH")
			std::cout << "O comando foi SEARCH" << std::endl;
		else if (line == "EXIT")
		{
			std::cout << "O comando foi EXIT" << std::endl;
			break ;
		}
		std::cout << "Choose one of the following options: [ADD, SEARCH, EXIT]: ";
		std::getline(std::cin, line);
	}
}
*/

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

int	main(void)
{
	PhoneBook	PhoneBook;
	bool		run;
	std::string	command;

	run = true;
	PhoneBook.show_instruction();
	while (run && (std::getline(std::cin, command)))
	{
		if ((std::cin.eof()) || (command == "EXIT"))
		{
			run = false;
			break ;
		}
		else if (command == "ADD")
			PhoneBook.set_information();
		else if (command == "SEARCH")
			PhoneBook.get_information();
		PhoneBook.show_instruction();
	}
}

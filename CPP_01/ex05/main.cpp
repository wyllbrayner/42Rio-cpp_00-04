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

#include "Harl.hpp"

int	main(void)
{
	Harl		complaining;
	std::string	cmd;

	std::cout << "What do you want to complain about?" << std::endl;
	std::cout << "choice: <debug> <info> <warning> <error> or <exit>" \
	<< std::endl;
	while (std::getline(std::cin, cmd))
	{
		if ((std::cin.eof()) || (cmd.compare("exit")) == 0)
			break;
		else
			complaining.complain(cmd);
		std::cout << "\n\n ========== **** ++++++++++ **** ========== " << std::endl;
		std::cout << "What do you want to complain about?" << std::endl;
		std::cout << "choice: <debug> <info> <warning> <error> or <exit>" \
		<< std::endl;
	}
	return (0);
}

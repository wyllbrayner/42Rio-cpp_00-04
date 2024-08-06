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

#include <string>
#include <iostream>

int	main(void)
{
	std::string	var;
	std::string	*stringPTR;
	std::string	&stringREF = var;

	var = "HI THIS IS BRAIN";
	stringPTR = &var;

	std::cout << "The memory address of var is:       " << &var \
	<< "                                                    \
	   . Finally, its content is: " << var << "." << std::endl;
	std::cout << "The memory address of stringPTR is: " << &stringPTR \
	<< ", the memory address held by stringPTR is: " << stringPTR \
	<< ". Finally, its content is: " << *stringPTR << "." << std::endl;
	std::cout << "The memory address of stringREF is:               " \
	<< ", the memory address held by stringREF is: " << &stringREF \
	<< ". Finally, its content is: " << stringREF << "." << std::endl;
	return (0);
}

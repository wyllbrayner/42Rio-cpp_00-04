/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
//#include <cstdlib>
#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	_contacts[8];
		int	_index;
		bool	_full;

	public:
		PhoneBook(void);
		~PhoneBook(void);

	void	set_information(void);
	void	get_information(void)const;
	void	show_instruction(void);
};
#endif

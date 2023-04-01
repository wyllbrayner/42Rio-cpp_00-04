/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>

class Contact
{
	private:
		static std::string	_fields_name[5];
		std::string			_informations[15];

		enum Fields
		{
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DarkestSecret
		};

	public:
		Contact(void);
		~Contact(void);

		bool	set_contact();
		void	get_contact(int index)const;
		void 	display_contact(void)const;
};

#endif
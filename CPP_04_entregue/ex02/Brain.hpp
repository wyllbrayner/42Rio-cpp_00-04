/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

# include <string.h>
# include <iostream>

class	Brain
{
	protected:
		std::string	_ideas[100];

	public:
		Brain();
		Brain( const Brain& copy );

		Brain	&operator=( const Brain &src );

		~Brain();
		const std::string	getIdea( int i )const;
		void			setIdea( int i, std::string idea );
};
#endif

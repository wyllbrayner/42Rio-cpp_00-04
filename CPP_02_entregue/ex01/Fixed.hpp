/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int			_fp_value;
		static const int	_fract_bits = 8;

	public:
		Fixed();
		Fixed( const Fixed& copy );
		Fixed( const int input );
		Fixed( const float input );
		~Fixed();

		Fixed	&operator=( const Fixed &src );

		float	toFloat( void )const;
		int	toInt( void )const;
		int	getRawBits( void )const;
		void	setRawbits( int const raw );
};

std::ostream	&operator<<( std::ostream &o, Fixed const &fixed );
#endif

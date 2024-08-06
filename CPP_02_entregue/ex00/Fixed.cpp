/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	this->_fp_value = 0;
	return;
}

Fixed::Fixed( const Fixed& copy )
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
	return;
}

Fixed	&Fixed::operator=( const Fixed &src )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fp_value = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
	return;
}

int	Fixed::getRawBits( void )const
{
	std::cout << "getRawbits member function called" << std::endl;
	return (this->_fp_value);
}

void	Fixed::setRawbits( int const raw )
{
	this->_fp_value = raw;
}

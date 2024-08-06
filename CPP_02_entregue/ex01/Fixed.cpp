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

Fixed::Fixed( const int input )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fp_value = (input << this->_fract_bits);
	return;
}

Fixed::Fixed( const float input )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fp_value = roundf(input * (1 << this->_fract_bits));
	return ;
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

float	Fixed::toFloat( void )const
{
	float	f;

	f = ((float)this->_fp_value / (float)(1 << this->_fract_bits));
	return (f);
}

int	Fixed::toInt( void )const
{
	int	i;

	i = (this->_fp_value >> this->_fract_bits);
	return (i);
}

int	Fixed::getRawBits( void )const
{
	return (this->_fp_value);
}

void	Fixed::setRawbits( int const raw )
{
	this->_fp_value = raw;
}

std::ostream	&operator<<( std::ostream &o, Fixed const &fixed )
{
	o << fixed.toFloat();
	return (o);
}

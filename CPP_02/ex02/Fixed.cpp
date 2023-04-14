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
	this->_fp_value = 0;
	return;
}

Fixed::Fixed( const Fixed& copy)
{
	*this = copy;
	return;
}

Fixed::Fixed(const int input)
{
	this->_fp_value = (input << this->_fract_bits);
	return;
}

Fixed::Fixed(const float input)
{
	this->_fp_value = roundf(input * (1 << this->_fract_bits));
	return ;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	this->_fp_value = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	return;
}

float Fixed::toFloat( void )const
{
	float	f;

	f = ((float)this->_fp_value / (float)(1 << this->_fract_bits));
	return (f);
}

int	Fixed::toInt( void )const
{
	int i;

	i = (this->_fp_value >> this->_fract_bits);
	return (i);
}

int	Fixed::getRawBits( void )const
{
	return (this->_fp_value);
}

void Fixed::setRawbits( int const raw )
{
	this->_fp_value = raw;
}

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool	Fixed::operator>(Fixed src) const
{
	if (this->toFloat() > src.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed src) const
{
	if (this->toFloat() < src.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed src) const
{
	if (this->toFloat() >= src.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed src) const
{
	if (this->toFloat() <= src.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed src) const
{
	if (this->toFloat() == src.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed src) const
{
	if (this->toFloat() != src.toFloat())
		return (true);
	else
		return (false);
}

float	Fixed::operator+(Fixed src) const
{
	return (this->toFloat() + src.toFloat());
}

float	Fixed::operator-(Fixed src) const
{
	return (this->toFloat() - src.toFloat());
}

float	Fixed::operator*(Fixed src) const
{
	return (this->toFloat() * src.toFloat());
}

float	Fixed::operator/(Fixed src) const
{
	return (this->toFloat() / src.toFloat());
}

Fixed	Fixed::operator++()
{
	this->_fp_value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->_fp_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this;
	this->_fp_value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	this->_fp_value--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &p1, Fixed &p2)
{
	if (p1.toFloat() < p2.toFloat())
		return (p1);
	else
		return (p2);
}

const Fixed	&Fixed::min(const Fixed &p1, const Fixed &p2)
{
	if (p1.toFloat() < p2.toFloat())
		return (p1);
	else
		return (p2);
}

Fixed	&Fixed::max(Fixed &p1, Fixed &p2)
{
	if (p1.toFloat() > p2.toFloat())
		return (p1);
	else
		return (p2);
}

const Fixed	&Fixed::max(const Fixed &p1, const Fixed &p2)
{
	if (p1.toFloat() > p2.toFloat())
		return (p1);
	else
		return (p2);
}
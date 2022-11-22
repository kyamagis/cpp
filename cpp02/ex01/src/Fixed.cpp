/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:13:56 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 14:14:03 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixed_point_num = 0;
}

Fixed::Fixed(const int _int_num)
{
	std::cout << "Int constructor called\n";
	this->fixed_point_num = _int_num << this->fractional_bits;
}

Fixed::Fixed(const float _float_num)
{
	std::cout << "Float constructor called\n";
	this->fixed_point_num = roundf(_float_num * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed &_fixed)
{
	std::cout << "Copy constructor called\n";
	this->fixed_point_num = _fixed.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed &_fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->fixed_point_num = _fixed.getRawBits();
	//*this = _fixed;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits( void ) const
{
	return this->fixed_point_num;
}

void	Fixed::setRawBits( int const raw )
{
	this->fixed_point_num = raw;
}

float	Fixed::toFloat( void ) const
{
	return (float)this->fixed_point_num / (1 << this->fractional_bits);
}

int		Fixed::toInt( void ) const
{
	return this->fixed_point_num >> this->fractional_bits;
}

std::ostream& operator<<(std::ostream &ostrm, Fixed const &_fixed)
{
	return ostrm << _fixed.toFloat();
}

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

Fixed::Fixed(): fixed_point_num()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &_fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = _fixed;
}

Fixed&	Fixed::operator=(const Fixed &_fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &_fixed)
	{
		this->fixed_point_num = _fixed.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int _int_num): fixed_point_num(_int_num * (1 << this->fractional_bits))
{
	std::cout << "Int constructor called"  << std::endl;
}

Fixed::Fixed(const float _float_num): fixed_point_num(roundf(_float_num * (1 << this->fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
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
	return this->fixed_point_num / (1 << this->fractional_bits);
}

std::ostream& operator<<(std::ostream &ostrm, Fixed const &_fixed)
{
	return ostrm << _fixed.toFloat();
}

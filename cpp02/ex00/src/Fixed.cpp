/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:13:44 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 14:13:45 by kyamagis         ###   ########.fr       */
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
	std::cout << "Destructor called"  << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called"  << std::endl;
	return this->fixed_point_num;
}

void	Fixed::setRawBits( int const raw )
{
	this->fixed_point_num = raw;
}

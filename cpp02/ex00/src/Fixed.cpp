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

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixed_point_num = 0;
}

Fixed::Fixed(Fixed &_fixed)
{
	std::cout << "Copy constructor called\n";
	this->fixed_point_num = _fixed.getRawBits();
}

Fixed&	Fixed::operator=(Fixed &_fixed)
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
	std::cout << "getRawBits member function called\n";
	return this->fixed_point_num;
}

void	Fixed::setRawBits( int const raw )
{
	this->fixed_point_num = raw;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:14:18 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 14:14:18 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point_num = 0;
}

Fixed::Fixed(const int _int_num)
{
	this->fixed_point_num = _int_num << this->fractional_bits;
}

Fixed::Fixed(const float _float_num)
{
	this->fixed_point_num = roundf(_float_num * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed &_fixed)
{
	this->fixed_point_num = _fixed.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed &_fixed)
{
	this->fixed_point_num = _fixed.getRawBits();
	//*this = _fixed;
	return *this;
}

Fixed::~Fixed()
{
	
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

bool	Fixed::operator>(const Fixed &_fixed)
{
	return this->fixed_point_num > _fixed.getRawBits();
}

bool	Fixed::operator<(const Fixed &_fixed)
{
	return this->fixed_point_num < _fixed.getRawBits();
}

bool	Fixed::operator>=(const Fixed &_fixed)
{
	return this->fixed_point_num >= _fixed.getRawBits();
}

bool	Fixed::operator<=(const Fixed &_fixed)
{
	return this->fixed_point_num <= _fixed.getRawBits();
}

bool	Fixed::operator==(const Fixed &_fixed)
{
	return this->fixed_point_num == _fixed.getRawBits();
}

bool	Fixed::operator!=(const Fixed &_fixed)
{
	return this->fixed_point_num != _fixed.getRawBits();
}

float	Fixed::operator+(const Fixed &_fixed)
{
	return this->toFloat() + _fixed.toFloat();
}

float	Fixed::operator-(const Fixed &_fixed)
{
	return this->toFloat() - _fixed.toFloat();
}

float	Fixed::operator*(const Fixed &_fixed)
{
	return this->toFloat() * _fixed.toFloat();
}

float	Fixed::operator/(const Fixed &_fixed)
{
	return this->toFloat() / _fixed.toFloat();
}

Fixed&	Fixed::operator++()
{
	this->fixed_point_num++;
	return	*this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->fixed_point_num++;
	return tmp;
}

Fixed&	Fixed::operator--()
{
	this->fixed_point_num--;
	return	*this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->fixed_point_num--;
	return tmp;
}

Fixed&	Fixed::min(Fixed &_a, Fixed &_b)
{
	if (_a.getRawBits() < _b.getRawBits())
		return _a;
	return _b;
}

const Fixed&	Fixed::min(const Fixed &_a, const Fixed &_b)
{
	if (_a.getRawBits() < _b.getRawBits())
		return _a;
	return _b;
}

Fixed&	Fixed::max(Fixed &_a, Fixed &_b)
{
	if (_a.getRawBits() < _b.getRawBits())
		return _b;
	return _a;
}

const Fixed&	Fixed::max(const Fixed &_a, const Fixed &_b)
{
	if (_a.getRawBits() < _b.getRawBits())
		return _b;
	return _a;
}

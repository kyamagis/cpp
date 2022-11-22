/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/10 23:04:50 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					fixed_point_num;
		static const int	fractional_bits = 8;
	
	public :
		Fixed();
		Fixed(const int	_int_num);
		Fixed(const float _float_num);
		Fixed(const Fixed &_fixed);
		~Fixed();

		Fixed&	operator=(const Fixed &_fixed);

		bool	operator>(const Fixed &_fixed);
		bool	operator<(const Fixed &_fixed);
		bool	operator>=(const Fixed &_fixed);
		bool	operator<=(const Fixed &_fixed);
		bool	operator==(const Fixed &_fixed);
		bool	operator!=(const Fixed &_fixed);

		float	operator+(const Fixed &_fixed);
		float	operator-(const Fixed &_fixed);
		float	operator*(const Fixed &_fixed);
		float	operator/(const Fixed &_fixed);

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed&	min(Fixed &_a, Fixed &_b);
		static const Fixed&	min(const Fixed &_a, const Fixed &_b);
		static Fixed&	max(Fixed &_a, Fixed &_b);
		static const Fixed&	max(const Fixed &_a, const Fixed &_b);

};

std::ostream& operator<<(std::ostream &ostrm, const Fixed &_fixed);

#endif

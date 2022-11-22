/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:14:30 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 14:14:30 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"
class	Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	
	public :
		Point();
		Point(const float _x, const float _y);
		Point(const Point &_point);
		~Point();

		Point&	operator=(const Point &_Point);
		bool	operator==(const Point &_Point) const;
		int		get_x( void ) const;
		int		get_y( void ) const;
		float	get_float_x( void ) const;
		float	get_float_y( void ) const;

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};

std::ostream& operator<<(std::ostream &ostrm, const Point &_Point);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
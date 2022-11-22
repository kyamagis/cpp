/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:14:51 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 16:50:17 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point(): x(0), y(0)
{

}

Point::Point(const float _x, const float _y): x(_x), y(_y)
{
	
}

Point::Point(const Point &_point): x(_point.get_x()), y(_point.get_y())
{

}

Point::~Point()
{
	
}

bool	Point::operator==(const Point &_point) const
{
	return (this->get_x() == _point.get_x()) && (this->get_y() == _point.get_y());
}

Point&	Point::operator=(const Point &_point)
{
	(void)_point;
	return *this;
}

int		Point::get_x( void ) const
{
	return this->x.getRawBits();
}

int		Point::get_y( void ) const
{
	return this->y.getRawBits();
}

float	Point::get_float_x( void ) const
{
	return this->x.toFloat();
}

float	Point::get_float_y( void ) const
{
	return this->y.toFloat();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:14:37 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/16 14:14:37 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

static float	cross_product(Point const a, Point const b, Point const point)
{
	float	a_to_bx, a_to_by, b_to_px, b_to_py;

	a_to_bx = b.get_float_x() - a.get_float_x();
	a_to_by = b.get_float_y() - a.get_float_y();

	b_to_px = point.get_float_x() - b.get_float_x();
	b_to_py = point.get_float_y() - b.get_float_y();

	return (a_to_bx * b_to_py) - (a_to_by * b_to_px);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (a == b || b == c || c == a)
		return false;

	float	abp, bcp, cap;

	abp = cross_product(a, b, point);
	bcp = cross_product(b, c, point);
	cap = cross_product(c, a, point);
	return ((0 < abp && 0 < bcp && 0 < cap) || (abp < 0 && bcp < 0 && cap < 0));
}

/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:54:32 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/08 16:11:01 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int	main(void)
{
	Point	a0(0.0, 0.0);
	Point	b0(1.0, 0.0);
	Point	c0(0.0, 1.0);
	Point	point0(0.4, 0.4);

	std::cout << "point is " << bsp(a0, b0 , c0, point0) << std::endl;

	Point	a1(0.0, 0.0);
	Point	b1(1.0, 0.0);
	Point	c1(0.0, 1.0);
	Point	point1(2.4, 2.4);

	std::cout << "point is " << bsp(a1, b1 , c1, point1) << std::endl;

	Point	a2(0.0, 0.0);
	Point	b2(1.0, 0.0);
	Point	c2(0.0, 1.0);
	Point	point2(0.0, 0.0);

	std::cout << "point is " << bsp(a2, b2 , c2, point2) << std::endl;
	return 0;
}

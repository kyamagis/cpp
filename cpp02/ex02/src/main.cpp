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

#include "../includes/Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "  a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "  a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "  a = " << a << std::endl << std::endl;

	std::cout << b << std::endl << std::endl;

	std::cout << "a < b = " << (a < b) << std::endl;
	std::cout << "a > b = " << (a > b) << std::endl;
	std::cout << "a <= b = " << (a <= b) << std::endl;
	std::cout << "a >= b = " << (a >= b) << std::endl;
	std::cout << "a == b = " << (a == b) << std::endl;
	std::cout << "a != b = " << (a != b) << std::endl << std::endl;

	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::max( a, c ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::min( a, c ) << std::endl;

	return 0;
}

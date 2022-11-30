/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/29 16:09:53 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< class A >
void	iter(const A *array, size_t len, void (*f)(const A &))
{
	for(size_t i = 0; i < len; i++)
		f(array[i]);
}

template< class A >
void	iter(A *array, size_t len, void (*f)(A &))
{
	for(size_t i = 0; i < len; i++)
		f(array[i]);
}

template< class T>
void	putElement(const T &c)
{
	std::cout << c;
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/22 19:13:25 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <class X>

void	swap(X &a, X &b)
{
	X	tmp = a;

	a = b;
	b = tmp;
}

template <class X>

const X	&min(const X &a, const X &b)
{
	if (a <= b)
		return a;
	return b;
}

template <class X>

const X	&max(const X &a, const X &b)
{
	if (b <= a)
		return a;
	return b;
}

#endif

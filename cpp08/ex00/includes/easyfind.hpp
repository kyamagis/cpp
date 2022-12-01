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

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

class	NotFoundException: public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return "Not found";
		}
};

template < typename T >
typename	T::iterator easyfind(T &t, int &num)
{
	typename T::iterator iter = std::find(t.begin(), t.end(), num);
	if (iter == t.end())
		throw NotFoundException();
	return iter;
}

#endif

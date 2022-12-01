/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/22 21:32:22 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <vector>

template< typename T >
class	MutantStack: public std::stack<T>
{
	public :
		typedef typename std::stack<T>::container_type::iterator	iterator;

		MutantStack(): std::stack<T>() {}

		MutantStack(const MutantStack &m): std::stack<T>(m) {}

		~MutantStack() {}

		MutantStack&	operator=(const MutantStack &m)
		{
			if (this == &m)
				return *this;
			std::stack<T>::operator=(m);
			return *this;
		}

		iterator	begin() { return std::stack<T>::c.begin(); }

		iterator	end() { return std::stack<T>::c.end(); }
};

#endif

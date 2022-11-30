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

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template< class T >

class	Array
{
	private:
		T				*array;
		unsigned int	len;

	public :
		Array(): len(0)
		{
			this->array = new T[len]();
		}
	
		Array(unsigned int n): len(n)
		{
			this->array = new T[n]();
		}

		Array(const Array &a): len(a.len)
		{
			this->array = new T[a.len]();
			for(unsigned int i = 0; i < a.len; i++)
				this->array[i] = a.array[i];
		}

		~Array()
		{
			delete[] this->array;
		}

		Array&	operator=(const Array &a)
		{
			if (this == &a)
				return *this;
			len = a.len;
			delete[] this->array;
			this->array = new T[a.len]();
			for(unsigned int i = 0; i < a.len; i++)
				this->array[i] = a.array[i];
			return *this;
		}

		class	IndexOverLengthException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Index is over than array length";
				}
		};

		T	&operator[](const unsigned int &idx) const
		{
			if (this->len <= idx)
				throw Array::IndexOverLengthException();
			return this->array[idx];
		}

		unsigned int	size() const
		{
			return this->len;
		}
};

#endif

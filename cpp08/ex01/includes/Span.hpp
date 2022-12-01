/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/22 19:54:06 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

class	Span
{
	private :
		const unsigned int	_size;
		std::vector<int>	stack;

	public :
		Span();
		Span(const unsigned int &N);
		Span(const Span &_span);
		Span&	operator=(const Span &_span);
		~Span();

		void			addNumber(const int &num);
		void			addNumbers(std::vector<int> _stack);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		std::vector<int>	getStack()const;

		class	CannotAddException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class	SizeIsOverException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class	NotFoundSpanException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif

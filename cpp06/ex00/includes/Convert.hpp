/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/22 19:13:25 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <limits>
#include <cfloat>
#include <cmath>

class	Convert
{
	private:
		const char			*arg;
		const std::string	str;
		Convert();
		Convert(const Convert &_Convert);
	
	public :
		Convert(const char *_arg);
		Convert&	operator=(Convert &_Convert);
		~Convert();

		void	isString();
		bool	searchHeadOfArg(size_t &i);
		bool	searcArgument(size_t &i);
		bool	extremumProcessing();
		void	putChar();
		void	putInt();
		void	putFloat();
		void	putDouble();
		void	putNum(size_t &idx);
	
		void	detectIntOverFlow(const size_t& dig, \
								void	func(const unsigned long &, const bool &));

		void	detectFloatOverFlow(const size_t& dig, \
								void	(Convert:: *func)(const double long &, const size_t &digcount, size_t &idx));
		void	detectOverFloatlimit(const double long &num, const size_t &digcount, size_t &idx);
		void	detectOverDoublelimit(const double long &num, const size_t &digcount, size_t &idx);
		void	addFixedPoint(size_t &i, size_t &digcount, double long &num, size_t &idx, const size_t &dig);

		class	InvalidArgument: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class	Overflow: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif

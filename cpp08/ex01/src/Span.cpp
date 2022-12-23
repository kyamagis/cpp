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

#include "../includes/Span.hpp"

Span::Span(): _size(0)
{

}

Span::Span(const unsigned int &N): _size(N)
{
	this->stack.reserve(this->_size);
}

Span::Span(const Span &_span): _size(_span._size)
{
	*this = _span;
}

Span&	Span::operator=(const Span &_span)
{
	if (this == &_span)
		return *this;
	if (this->_size < _span._size)
		throw Span::SizeIsOverException();
	this->stack = _span.stack;
	return *this;
}

Span::~Span()
{

}

void	Span::addNumber(const int &num)
{
	if (_size <= this->stack.size())
		throw Span::CannotAddException();
	this->stack.push_back(num);
}

void	Span::addNumbers(std::vector<int> _stack)
{
	std::vector<int>::iterator	begin_iter = _stack.begin();
	std::vector<int>::iterator	end_iter = _stack.end();

	for (std::vector<int>::iterator i = begin_iter; i != end_iter; i++)
	{
		if (_size <= this->stack.size())
			throw Span::CannotAddException();
		this->stack.push_back(*i);
	}
}

unsigned int	Span::shortestSpan()
{
	if (this->stack.size() < 2)
		throw NotFoundSpanException();

	unsigned int	shortspan = UINT_MAX;
	unsigned int	diff;

	std::sort(this->stack.begin(), this->stack.end());
	for(unsigned int i = 0; i + 1 < this->stack.size(); i++)
	{
		if ((diff = this->stack[i + 1] - this->stack[i]) < shortspan)
			shortspan = diff;
	}
	return shortspan;
}


unsigned int	Span::longestSpan()
{
	if (this->stack.size() < 2)
		throw NotFoundSpanException();
	std::sort(this->stack.begin(), this->stack.end());
	return this->stack[this->stack.size() - 1] - this->stack[0];
}

std::vector<int>	Span::getStack()const
{
	return this->stack;
}


const char	*Span::SizeIsOverException::what(void) const throw()
{
	return "Size is over than N";
}

const char	*Span::CannotAddException::what(void) const throw()
{
	return "Can't add any more";
}

const char	*Span::NotFoundSpanException::what(void) const throw()
{
	return "Not found span";
}

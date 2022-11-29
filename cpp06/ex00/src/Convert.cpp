/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/28 20:34:46 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Convert.hpp"

Convert::Convert()
{

}

Convert::Convert(const char *_arg): arg(_arg), str(_arg)
{
	if (extremumProcessing() == false)
		return ;
	try
	{
		isString();
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << this->arg << std::endl;
		return ;
	}
	putChar();
	putInt();
	putFloat();
	putDouble();
}

Convert::Convert(const Convert &_convert): arg(_convert.arg)
{

}

Convert&	Convert::operator=(Convert &_convert)
{
	(void)_convert;
	return *this;
}

Convert::~Convert()
{
	
}

bool	 Convert::extremumProcessing()
{
	if ("+inff" == this->str || "inff" == this->str || \
		"+inf" == this->str || "inf" == this->str)
	{
		std::cout << "char   : impossible" << std::endl;
		std::cout << "int    : impossible" << std::endl;
		std::cout << "float  : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl;
		return false;
	}
	if ("-inff" == this->str || "-inf" == this->str)
	{
		std::cout << "char   : impossible" << std::endl;
		std::cout << "int    : impossible" << std::endl;
		std::cout << "float  : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
		return false;
	}
	if  ("nan" == this->str || "nanf" == this->str)
	{
		std::cout << "char   : impossible" << std::endl;
		std::cout << "int    : impossible" << std::endl;
		std::cout << "float  : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
		return false;
	}
	return true;
}

const char	*Convert::InvalidArgument::what(void) const throw()
{
	return "Invalid argument: ";
}

const char	*Convert::Overflow::what(void) const throw()
{
	return "Overflow ";
};

bool	Convert::searchHeadOfArg(size_t	&i)
{
	if (std::isprint(this->arg[0]) && !this->arg[1])
		return true;
	if (this->arg[0] == '-')
	{	
		i++;
		if (this->arg[i] == '0' && !this->arg[i + 1])
			throw InvalidArgument();
	}
	if (this->arg[i] == '0' && (std::isdigit(this->arg[i + 1]) || this->arg[i + 1] != '.'))
		throw InvalidArgument();
	return false;
}

bool	Convert::searcArgument(size_t &i)
{
	if (!isdigit(this->arg[i]))
		throw InvalidArgument();
	while (isdigit(this->arg[i]))
		i++;
	if (!this->arg[i] || (this->arg[i] == 'f' && !this->arg[i + 1]))
		return true;
	return false;
}

void	Convert::isString()
{
	size_t	i = 0;

	if (searchHeadOfArg(i))
		return ;
	if (searcArgument(i))
		return ;
	else if (this->arg[i] == '.')
	{
		i++;
		if (searcArgument(i))
			return ;
	}
	throw InvalidArgument();
}

void	Convert::detectIntOverFlow(const size_t& dig, \
									void	func(const unsigned long &, const bool &))
{
	unsigned long	num = 0;
	size_t			digcount = 1;
	bool			minus_flg = false;
	size_t	i = 0;
	if (this->arg[0] == '-')
	{		
		i++;
		minus_flg = true;
	}
	while (isdigit(this->arg[i]))
	{
		if (num != 0)
			digcount++;
		if (dig < digcount)
			throw Convert::Overflow();
		num = 10 * num + (this->arg[i] - '0');
		i++;
	}
	func(num, minus_flg);
}

/* char ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

static void	detectOverInt8limit(const unsigned long &num, const bool &minus_flg)
{
	if (INT8_MAX < num && !minus_flg)
		throw Convert::Overflow();
	else if (INT8_MAX + 1UL < num && minus_flg)
		throw Convert::Overflow();
	else if (minus_flg)
		std::cout << "char   : impossible" << std::endl;
	else if (!std::isprint(num))
		std::cout << "char   : Non displayable" << std::endl;
	else
	{	
		char c = static_cast<char>(num);
		std::cout << "char   : \'" << c << '\'' << std::endl;
	}
}

void Convert::putChar()
{
	if (!this->arg[1] && !std::isdigit(this->arg[0]))
	{
		std::cout << "char   : \'" << this->arg[0] << '\'' << std::endl;
		return ;
	}
	try
	{
		detectIntOverFlow(3, detectOverInt8limit);
	}
	catch(const std::exception& e)
	{
		std::cout << "char   : " << e.what() << std::endl;
	}
}

/* int ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */


static void	detectOverInt32limit(const unsigned long &num, const bool &minus_flg)
{
	if (INT_MAX < num && !minus_flg)
		throw Convert::Overflow();
	else if (INT_MAX + 1UL < num && minus_flg)
		throw Convert::Overflow();
	else if (minus_flg)
		std::cout << "int    : " << -1 * static_cast<int>(num) << std::endl;
	else
		std::cout << "int    : " << static_cast<int>(num) << std::endl;
}

void Convert::putInt()
{
	if (!this->arg[1] && !std::isdigit(this->arg[0]))
	{
		int c = static_cast<int>(this->arg[0]);
		std::cout << "int    : " << c << std::endl;
		return ;
	}
	try
	{
		detectIntOverFlow(10, detectOverInt32limit);
	}
	catch(const std::exception& e)
	{
		std::cout << "int    : " << e.what() << std::endl;
	}
}

/* float ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

void	Convert::putNum(size_t &idx)
{
	if (this->arg[idx] == '.')
	{	
		std::cout << this->arg[idx];
		idx++;
	}
	while (this->arg[idx] == '0')
	{
		std::cout << this->arg[idx];
		idx++;
	}	
}

void	Convert::detectOverFloatlimit(const double long &num, const size_t &digcount, size_t &idx)
{
	if (FLT_MAX < num)
		throw Convert::Overflow();
	else if (6 < digcount || idx == 0)
		std::cout << "float  : " << static_cast<float>(num) << 'f' << std::endl;
	else
	{
		std::cout << "float  : " << static_cast<float>(num);
		putNum(idx);
		std::cout << 'f' << std::endl;
	}
	
}

void	Convert::addFixedPoint(size_t &i, size_t &digcount, \
								double long &num, size_t &idx, const size_t &dig)
{
	size_t	tmp_idx = i;
	size_t	power = 1;
	idx = i;

	i++;
	while (isdigit(this->arg[i]))
	{
		if (num != 0)
			digcount++;
		if (dig < digcount)
			throw Convert::Overflow();
		num += (this->arg[i] - '0') / std::pow(10, power);
		if (this->arg[i] != '0')
			idx = i;
		i++;
		power++;
	}
	if (tmp_idx < idx)
		idx++;
}

void	Convert::detectFloatOverFlow(const size_t& dig, \
									void	(Convert:: *func)(const double long &, const size_t &, size_t &))
{
	double long		num = 0;
	size_t			digcount = 1;
	size_t			i = 0;
	size_t			idx = 0;

	if (this->arg[0] == '-')
		i++;
	while (isdigit(this->arg[i]))
	{
		if (num != 0)
			digcount++;
		if (dig < digcount)
			throw Convert::Overflow();
		num = 10 * num + (this->arg[i] - '0');
		i++;
	}
	if (this->arg[i] == '.')
		addFixedPoint(i, digcount, num, idx, dig);
	(this->*func)(num, digcount, idx);
}

void Convert::putFloat()
{
	if (!this->arg[1] && !std::isdigit(this->arg[0]))
	{
		float c = static_cast<float>(this->arg[0]);
		std::cout << "float  : " << c << 'f' << std::endl;
		return ;
	}
	try
	{
		detectFloatOverFlow(39, &Convert::detectOverFloatlimit);
	}
	catch(const std::exception& e)
	{
		std::cout << "float  : " << e.what() << std::endl;
	}
}

/* double ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

void	Convert::detectOverDoublelimit(const double long &num, const size_t &digcount, size_t &idx)
{
	if (DBL_MAX < num)
		throw Convert::Overflow();
	else if (6 < digcount || idx == 0)
		std::cout << "double : " << static_cast<double>(num) << std::endl;
	else
	{
		std::cout << "double : " << static_cast<double>(num);
		putNum(idx);
		std::cout << std::endl;
	}
	
}

void Convert::putDouble()
{
	if (!this->arg[1] && !std::isdigit(this->arg[0]))
	{
		double c = static_cast<double>(this->arg[0]);
		std::cout << "double : " << c << std::endl;
		return ;
	}
	try
	{
		detectFloatOverFlow(309, &Convert::detectOverDoublelimit);
	}
	catch(const std::exception& e)
	{
		std::cout << "double : " << e.what() << std::endl;
	}
}